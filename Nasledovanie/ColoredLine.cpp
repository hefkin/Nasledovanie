#include "ColoredLine.h"

ColoredLine::ColoredLine()
{
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
	else cout << "It`s wrong number";
}

string ColoredLine::setColor()
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

void ColoredLine::getColor()
{
	cout << "Color - " << color << endl;
}

void ColoredLine::getAll()
{
	getXY();
	getColor();
}

ColoredLine::~ColoredLine()
{

}
