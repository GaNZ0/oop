#pragma once
#include "Player.h"
#include "Hero.h"

class TeamPart {
public:
	Player player;
	Hero hero;
	TeamPart(Player pPlayer, Hero pHero) {
		player = pPlayer;
		hero = pHero;
	}
	TeamPart(){}
};