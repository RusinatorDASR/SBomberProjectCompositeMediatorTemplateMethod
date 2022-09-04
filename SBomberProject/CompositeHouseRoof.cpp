#include <iostream>

#include "CompositeHouseRoof.h"
#include "ScreenSingleton.h"

using namespace std;

void CompositeHouseRoof::Draw() const
{
	ScreenSingleton::getInstance().SetColor(CC_Magenta);
	ScreenSingleton::getInstance().GotoXY(x, y - 5);
	cout << "  ########  ";
	ScreenSingleton::getInstance().GotoXY(x, y - 4);
	cout << "############";
	ScreenSingleton::getInstance().GotoXY(x, y - 3);
	cout << "############";
	ScreenSingleton::getInstance().GotoXY(x, y - 2);

}
