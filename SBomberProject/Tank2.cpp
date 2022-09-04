#include "Tank2.h"

void Tank2::BeNotified(string str) {
	levelGUI->AddMessage("Yes! You are " + str);
}

void Tank2::SentMessage() {
	int temp = rand() * 3 + 1;
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
