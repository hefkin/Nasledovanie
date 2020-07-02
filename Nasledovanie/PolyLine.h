#pragma once

#include <iostream>
#include <string>

#include "Line.h"

struct point1 
{
	double x;
	double y;
};

class PolyLine
	: public Line
{
public:
	PolyLine();
	int setXY() override;
	void getXY() override;
	~PolyLine();
public:
	int NofA, f;
	point1* point_1;
};