#pragma once
#include <vector>
#include "Hero.h"
#include <string>

class HeroManager {
public:
	vector<Hero> heroes;
	Hero GetHeroByName(string pName) {
		for (int i = 0; i < heroes.size(); i++) {
			if (heroes[i].name == pName) {
				return heroes[i];
			}
		}
	}
	void AddHero(string pName, int pDamage, int pSpeed, int php) {
		Hero hero(pName, pDamage, pSpeed, php);
		heroes.push_back(hero);
	}
	void RemoveHero(int number) {
		heroes.erase(heroes.begin() + number - 1);
	}
	void createFirstHeroes() {
		string names[10]{"hero1", "hero2", "hero3", "hero4", "hero5", "hero6", "hero7", "hero8", "hero9", "hero10"};
		int damages[10]{300, 300, 200, 200, 400, 400, 200, 200, 350, 350};
		int speeds[10]{200, 210, 220, 230, 240, 250, 260, 270, 280, 290};
		int hps[10]{ 500, 550, 600, 550, 450, 500, 550, 450, 650, 600 };

		for (int i = 0; i < 10; i++) {
			AddHero(names[i], damages[i], speeds[i], hps[i]);
		}
	}
};