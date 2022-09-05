#pragma once
#include <iostream>

#include "Plane.h"
#include "ScreenSingleton.h"

class BigPlane :
	public Plane
{
public:
	void DrawBody() const override;
	void DrawWings() const override;
	void DrawTail() const override;
};

