#pragma once

#include "Tank.h"
#include "Mediator.h"
#include "LevelGUI.h"

using namespace std;

class Tank2 :
	public Tank
{
public:
	Tank2(Mediator* mediator_, LevelGUI* levelGUI_) : mediator(mediator_), levelGUI(levelGUI_) {}

	void BeNotified(string str) override;

	void SentMessage();


	Mediator* mediator;

private:

	LevelGUI* levelGUI;
};

