#pragma once
#include "TeamPart.h"
#include <string>

using namespace std;

class Session {
public:
	TeamPart TeamRed[5];
	TeamPart TeamBlue[5];

	string winner;
};