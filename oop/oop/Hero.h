#pragma once
#include <string>

using namespace std;

class Hero {
public:
	string name;
	int hp;
	int damage;
private:
	int speed;
public:
	Hero(string pName, int pDamage, int pSpeed, int php) {
		name = pName;
		damage = pDamage;
		speed = pSpeed;
		hp = php;
	}
	Hero(){}
};