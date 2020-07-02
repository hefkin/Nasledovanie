#pragma once

#include <iostream>
#include <string>

#include "Point.h"

class ColoredPoint
	: public Point
{
public:
	ColoredPoint();
	int setXY() override;
	void getXY() override;
	string setColor() override;
	void getColor() override;
	void getAll();
	~ColoredPoint();
public:
	point point;
	string color;
};

