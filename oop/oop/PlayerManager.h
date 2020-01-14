#pragma once
#include "Player.h"
#include <vector>

class PlayerManager {
public:
	vector<Player> players;
	int playerCount;
public:
	PlayerManager() {
		playerCount = 0;
	}
	Player GetPlayerByName(string pName) {
		for (int i = 0; i < players.size(); i++) {
			if (players[i].name == pName) {
				return players[i];
			}
		}
	}
	Player GetPlayerById(int pid) {
		for (int i = 0; i < players.size(); i++) {
			if (players[i].getID() == pid) {
				return players[i];
			}
		}
	}
	void RemovePlayerById(int number) {
		players.erase(players.begin() + number - 1);
	}
	void AddPlayer(string pName) {
		Player player(pName, ++playerCount);
		players.push_back(player);
	}
	void createFirstPlayers() {
		string names[10]{"Kirito", "Arza", "Josuke", "Mosukasu", "Chika", "Mitsuki", "Rostlen", "Fillin", "Kiss-shot-Accerola-Orion-Heart-Under-Blade"};

		for (int i = 0; i < 10; i++) {
			AddPlayer(names[i]);
		}
	}
	int getRankByNumber(int number) {
		return players[number].getRank();
	}
};