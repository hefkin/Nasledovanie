#pragma once

#include <iostream>
#include <string>

#include "Line.h"

class ColoredLine
	: public Line
{
public:
	ColoredLine();
	string setColor() override;
	void getColor() override;
	void getAll();
	~ColoredLine();
public:
	string color;
};