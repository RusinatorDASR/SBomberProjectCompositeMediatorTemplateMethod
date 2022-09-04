#pragma once

#include "Tank.h"
#include "Mediator.h"
#include "LevelGUI.h"

using namespace std;

class Tank1 :
	public Tank
{
public:
	Tank1(Mediator* mediator_, LevelGUI* levelGUI_) : mediator(mediator_), levelGUI	(levelGUI_) {}

	void BeNotified(string str) override;

	void SentMessage();


	Mediator* mediator;

private:

	LevelGUI* levelGUI;
};

