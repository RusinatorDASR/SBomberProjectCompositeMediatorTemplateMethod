#pragma once

#include <stdint.h>
#include <string>

#include "DestroyableGroundObject.h"

using namespace std;

class Mediator;

class Tank : public DestroyableGroundObject
{
public:
	virtual void BeNotified(string str) = 0;

	bool __fastcall isInside(double x1, double x2) const override;

	inline uint16_t GetScore() const override { return score; }

	void Draw() const override;

	static Mediator* pMediator;

private:

	const uint16_t score = 30;
};

