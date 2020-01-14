#pragma once
#include <string>

using namespace std;

class Hero {
public:
	string name;
private:
	int hp;
	int damage;
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