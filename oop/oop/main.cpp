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

	////////////////////////
	gm.GameSession(playersFinders, hm.heroes);
	///////////////////////

	return 0;
}