#pragma once
#include <vector>

#include "Tank.h"

class Mediator
{
public:
	void AddTank(Tank* tank);

	void Notify(Tank* tank, std::string str);

private:
	std::vector<Tank*> tanks;
};

