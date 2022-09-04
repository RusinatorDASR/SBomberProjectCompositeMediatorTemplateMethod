#pragma once

#include <vector>

#include "CompositeHouse.h"

class CompositeHouseTree :
	public CompositeHouse
{
public:

	bool __fastcall isInside(double x1, double x2) const override;

	uint16_t GetScore() const override;

	void Draw() const override;

	void AddChild(CompositeHouse* child);

private:
	std::vector<CompositeHouse*> children;
};

