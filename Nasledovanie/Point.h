#pragma once

#include <iostream>
#include <string>

using namespace std;

struct point
{
	double x;
	double y;
};

class Point
{
public:
	virtual int setXY() = 0;
	virtual void getXY() = 0;
	virtual string setColor() = 0;
	virtual void getColor() = 0;
	virtual ~Point() = default;
};

