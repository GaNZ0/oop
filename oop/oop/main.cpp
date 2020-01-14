#include "Player.h"
#include "Hero.h"
#include "Session.h"
#include "PlayerManager.h"
#include "HeroManager.h"
#include "GameManager.h"

int main() {

	PlayerManager pm;
	HeroManager hm;
	GameManager gm;

	pm.createFirstPlayers();
	hm.createFirstHeroes();

	vector<Player> playersFinders = pm.players;

	///start gam esession
	Session session;

	session = gm.GameSession(playersFinders, hm.heroes);

	//game.....

	session.winner = "blue";

	gm.EndGameSession(session);
	//end game

	return 0;
}