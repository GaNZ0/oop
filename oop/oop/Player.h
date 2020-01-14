#pragma once
#include <string>

using namespace std;

class Player {
public:
	string name;
private:
	int rank;
	int id;
public:
	Player(string userName, int id):id(id){
		name = userName;
		rank = 1500;
	}
	Player(){}
	void changeName(string userName) {
		name = userName;
	}
	int getID() {
		return id;
	}
	int getRank() {
		return rank;
	}
	void plusRank() {
		rank += 25;
	}
	void minusRank() {
		rank -= 25;
	}
};