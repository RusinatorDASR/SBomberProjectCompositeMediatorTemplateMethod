#include "BigPlane.h"

void BigPlane::DrawBody() const {
	ScreenSingleton::getInstance().SetColor(CC_Red);
	ScreenSingleton::getInstance().GotoXY(x - 2, y);
	std::cout << "===========\\";
	ScreenSingleton::getInstance().GotoXY(x, y + 1);
	std::cout << "=========/";
}

void BigPlane::DrawWings() const {
	ScreenSingleton::getInstance().SetColor(CC_Red);
	ScreenSingleton::getInstance().GotoXY(x - 4, y - 2);
	std::cout << "===";
	ScreenSingleton::getInstance().GotoXY(x - 4, y - 1);
	std::cout << "=====";
}

void BigPlane::DrawTail() const {
	ScreenSingleton::getInstance().SetColor(CC_Red);
	ScreenSingleton::getInstance().GotoXY(x + 3, y - 2);
	std::cout << "\\\\";
	ScreenSingleton::getInstance().GotoXY(x + 3, y - 1);
	std::cout << "\\\\\\\\";
	ScreenSingleton::getInstance().GotoXY(x + 3, y + 2);
	std::cout << "////";
	ScreenSingleton::getInstance().GotoXY(x + 3, y + 3);
	std::cout << "//";
}
