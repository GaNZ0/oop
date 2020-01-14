#pragma once
#include "Session.h"
#include "PlayerManager.h"
#include <vector>
#include <cstdlib>
#include <ctime>

class GameManager {
public:
	vector<Session> ListOfSessions;
public:
	Session GameSession(vector<Player>& playersFinders, vector<Hero> heroes) {

		int randomPlayer = rand() % playersFinders.size();
		Player newPlayer = playersFinders[randomPlayer];
		playersFinders.erase(playersFinders.begin() + randomPlayer);

		int randomHero = rand() % heroes.size();
		Hero newHero = heroes[randomHero];

		TeamPart newTeamPart(newPlayer, newHero);

		vector<TeamPart> newTeamParts;
		newTeamParts.push_back(newTeamPart);
		


		while (true) {
			if (playersFinders.size() == 0)
				continue;

			randomPlayer = rand() % playersFinders.size();

			if (newTeamPart.player.getRank() - playersFinders[randomPlayer].getRank()  < -200 || 
					newTeamPart.player.getRank() - playersFinders[randomPlayer].getRank() > 200 ){
				continue;
			}

			newPlayer = playersFinders[randomPlayer];
			playersFinders.erase(playersFinders.begin() + randomPlayer);

			randomHero = rand() % heroes.size();

			newHero = heroes[randomHero];
			heroes.erase(heroes.begin() + randomHero);

			newTeamPart.player = newPlayer;
			newTeamPart.hero = newHero;

			newTeamParts.push_back(newTeamPart);

			if (newTeamParts.size() == 10 ) {
				break;
			}

		}

		Session session;

		for (int i = 0, j = 0; i < 10; i++) {

			if (i < 5) {
				session.TeamRed[i] = newTeamParts[i];
			}
			if (i >= 5) {
				session.TeamBlue[j] = newTeamParts[i];
				j++;
			}
		}

		return session;

	}
	void EndGameSession(Session& session) {
		if (session.winner == "blue") {
			for (int i = 0; i < 5; i++) {
				session.TeamBlue[i].player.plusRank();
			}
			for (int i = 0; i < 5; i++) {
				session.TeamRed[i].player.minusRank();
			}
		}
		else if (session.winner == "red") {
			for (int i = 0; i < 5; i++) {
				session.TeamBlue[i].player.minusRank();
			}
			for (int i = 0; i < 5; i++) {
				session.TeamRed[i].player.plusRank();
			}
		}
		ListOfSessions.push_back(session);
	}
};