#include <iostream>

#include "CompositeHouseWalls.h"
#include "ScreenSingleton.h"

using namespace std;

void CompositeHouseWalls::Draw() const
{
	ScreenSingleton::getInstance().SetColor(CC_LightBlue);
	ScreenSingleton::getInstance().GotoXY(x, y - 2);
	cout << "##   ##   ##";
	ScreenSingleton::getInstance().GotoXY(x, y - 1);
	cout << "##   ##   ##";
	ScreenSingleton::getInstance().GotoXY(x, y);
	cout << "############";
}