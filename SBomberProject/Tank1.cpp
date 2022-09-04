#include <ctime>

#include "Tank1.h"



void Tank1::BeNotified(string str) {
	levelGUI->AddMessage("Yes! You are " + str);
}

void Tank1::SentMessage() {
	srand(time(NULL));
	int temp = rand() % 3 + 1;
	switch (temp) {
	case 1: {
		levelGUI->AddMessage("Miss!");
		mediator->Notify(this, "Miss!");
	}
	case 2: {
		levelGUI->AddMessage("Looser!");
		mediator->Notify(this, "Looser!");
	}
	case 3: {
		levelGUI->AddMessage("Weeak!");
		mediator->Notify(this, "Weeak!");
	}
	}
}
