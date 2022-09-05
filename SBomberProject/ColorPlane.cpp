#include "ColorPlane.h"

void ColorPlane::DrawBody() const {
	ScreenSingleton::getInstance().SetColor(CC_Blue);
	ScreenSingleton::getInstance().GotoXY(x, y);
	std::cout << "=========>";
}

void ColorPlane::DrawWings() const {
	ScreenSingleton::getInstance().SetColor(CC_White);
	ScreenSingleton::getInstance().GotoXY(x - 2, y - 1);
	std::cout << "===";
}

void ColorPlane::DrawTail() const {
	ScreenSingleton::getInstance().SetColor(CC_White);
	ScreenSingleton::getInstance().GotoXY(x + 3, y - 1);
	std::cout << "\\\\\\\\";
	ScreenSingleton::getInstance().SetColor(CC_Red);
	ScreenSingleton::getInstance().GotoXY(x + 3, y + 1);
	std::cout << "////";
}
