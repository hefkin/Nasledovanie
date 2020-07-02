#pragma once

#include <vector>

#include "ColoredPoint.h"
#include "Line.h"
#include "ColoredLine.h"
#include "PolyLine.h"

class Picture
{
public:
	std::vector<Point*> points;
	void add(Point*);
	void erase(int);
	void show(int);
	void get_color(int);
};

