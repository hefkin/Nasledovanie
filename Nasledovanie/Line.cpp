#include "Line.h"

Line::Line()
{
	cout << "Enter x1 coordinate: ";
	cin >> point[0].x;
	cout << "Enter y1 coordinate: ";
	cin >> point[0].y;
	cout << "Enter x2 coordinate: ";
	cin >> point[1].x;
	cout << "Enter y2 coordinate: ";
	cin >> point[1].y;
}

int Line::setXY()
{
	cout << "Choose what do you want:\n1 - Move line\n2 - Set another coordinates\n";
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
		cout << "Enter line offset x: ";
		cin >> temp;
		point[0].x += temp;
		point[1].x += temp;
		temp = 0;
		cout << "Enter line offset y: ";
		cin >> temp;
		point[0].y += temp;
		point[1].y += temp;
	}
	else if (Choose == 2)
	{
		cout << "Enter new x1 coordinate: ";
		cin >> point[0].x;
		cout << "Enter new y1 coordinate: ";
		cin >> point[0].y;
		cout << "Enter new x2 coordinate: ";
		cin >> point[1].x;
		cout << "Enter new y2 coordinate: ";
		cin >> point[1].y;
	}
	else cout << "It`s wrong number";
	return 0;
}

void Line::getXY()
{
	cout << "Line points coordinates:\nx1 = " << point[0].x << ", y1 = " << point[0].y << "\nx2 = " << point[1].x << ", y2 = " << point[1].y << endl;
}

string Line::setColor()
{
	return "There are no color";
}

void Line::getColor()
{
	cout << "There are no color" << endl;
}

Line::~Line()
{
}
