#include <iostream>
#include <string>

#include "ColoredPoint.h"


ColoredPoint::ColoredPoint()
{
	cout << "Enter x coordinate: ";
	cin >> point.x;
	cout << "Enter y coordinate: ";
	cin >> point.y;
	int ColorChoose = 0;
	cout << "Set the color: \n1 - White \n2 - Yellow \n3 - Red \n4 - Blue \n5 - Green \n6 - Black\n";
	while (!(cin >> ColorChoose) || (cin.peek() != '\n'))
	{
		cin.clear();
		cin.ignore((numeric_limits<streamsize>::max)(), '\n');
		cout << "Incorrect data, try again" << endl;
	}
	if (ColorChoose == 1)
	{
		color = "White";
	}
	else if (ColorChoose == 2)
	{
		color = "Yellow";
	}
	else if (ColorChoose == 3)
	{
		color = "Red";
	}
	else if (ColorChoose == 4)
	{
		color = "Blue";
	}
	else if (ColorChoose == 5)
	{
		color = "Green";
	}
	else if (ColorChoose == 6)
	{
		color = "Black";
	}
	else cout << "It`s wrong number, try again";
}

int ColoredPoint::setXY()
{
	cout << "Choose what do you want:\n1 - Move point\n2 - Set another coordinates\n";
	int Choose;
	double temp = 0;
	while (!(cin >> Choose) || (cin.peek() != '\n'))
	{
		cin.clear();
		cin.ignore((numeric_limits<streamsize>::max)(), '\n');
		cout << "Incorrect data, try again" << endl;
	}
	if (Choose == 1)
	{
		cout << "Enter point offset x: ";
		cin >> temp;
		point.x += temp;
		temp = 0;
		cout << "Enter point offset y: ";
		cin >> temp;
		point.y += temp;
	}
	else if (Choose == 2)
	{
		cout << "Enter new x coordinate: ";
		cin >> point.x;
		cout << "Enter new y coordinate: ";
		cin >> point.y;
	}
	else cout << "It`s wrong number";
	return 0;
}

void ColoredPoint::getXY()
{
	cout << "ColoredPoint coordinates: x = " << point.x << ", y = " << point.y << endl;
}

string ColoredPoint::setColor()
{
	int ColorChoose = 0;
	cout << "Choose the color: \n1 - White \n2 - Yellow \n3 - Red \n4 - Blue \n5 - Green \n6 - Black\n";
	while (!(cin >> ColorChoose) || (cin.peek() != '\n'))
	{
		cin.clear();
		cin.ignore((numeric_limits<streamsize>::max)(), '\n');
		cout << "Incorrect data, try again" << endl;
	}
	if (ColorChoose == 1)
	{
		color = "White";
	}
	else if (ColorChoose == 2)
	{
		color = "Yellow";
	}
	else if (ColorChoose == 3)
	{
		color = "Red";
	}
	else if (ColorChoose == 4)
	{
		color = "Blue";
	}
	else if (ColorChoose == 5)
	{
		color = "Green";
	}
	else if (ColorChoose == 6)
	{
		color = "Black";
	}
	else cout << "It`s wrong number";
	return "Nice";
}

void ColoredPoint::getColor()
{
	cout << "Color - " << color << endl;
}

void ColoredPoint::getAll()
{
	getXY();
	getColor();
}

ColoredPoint::~ColoredPoint()
{

}