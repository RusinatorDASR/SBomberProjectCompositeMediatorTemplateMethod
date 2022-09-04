#include "Mediator.h"

void Mediator::AddTank(Tank* tank) {
	tanks.push_back(tank);
}

void Mediator::Notify(Tank* tank, std::string str) {
	for (auto c : tanks) {
		if (tank != c)
			c->BeNotified(str);
	}
}
