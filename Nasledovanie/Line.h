#pragma once

#include <iostream>
#include <string>

#include "Point.h"

class Line
	: public Point
{
public:
	Line();
	int setXY() override;
	void getXY() override;
	string setColor() override;
	void getColor() override;
	~Line();
public:
	point point[2];
};