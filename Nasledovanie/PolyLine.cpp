#include "PolyLine.h"



PolyLine::PolyLine()
{

	cout << "How many angles will the polygon have?\n1 - 3 angles (triangle)\n2 - 4 angles (rectangle)\n3 - 5 angles (pentagon)\n4 - 6 angles (hexagon)\n";
	while (!(cin >> f) || (cin.peek() != '\n') || (f < 0) || (f > 5))
	{
		cin.clear();
		cin.ignore((numeric_limits<streamsize>::max)(), '\n');
		cout << "Incorrect data, try again" << endl;
	}
	if (f == 1)
	{
		NofA = 3;
		point_1 = new point1[NofA];
		point_1[0].x = point[0].x; point_1[0].y = point[0].y;
		point_1[1].x = point[1].x; point_1[1].y = point[1].y;
		for (int i = 2; i < 3; i++)
		{
			cout << "Enter x" << i + 1 << " coordinate: ";
			cin >> point_1[i].x;
			cout << "Enter y" << i + 1 << " coordinate: ";
			cin >> point_1[i].y;
		}
	}
	else if (f == 2)
	{
		NofA = 4;
		point_1 = new point1[NofA];
		point_1[0].x = point[0].x; point_1[0].y = point[0].y;
		point_1[1].x = point[1].x; point_1[1].y = point[1].y;
		for (int i = 2; i < 4; i++)
		{
			cout << "Enter x" << i + 1 << " coordinate: ";
			cin >> point_1[i].x;
			cout << "Enter y" << i + 1 << " coordinate: ";
			cin >> point_1[i].y;
		}
	}
	else if (f == 3)
	{
		NofA = 5;
		point_1 = new point1[NofA];
		point_1[0].x = point[0].x; point_1[0].y = point[0].y;
		point_1[1].x = point[1].x; point_1[1].y = point[1].y;
		for (int i = 2; i < 5; i++)
		{
			cout << "Enter x" << i + 1 << " coordinate: ";
			cin >> point_1[i].x;
			cout << "Enter y" << i + 1 << " coordinate: ";
			cin >> point_1[i].y;
		}
	}
	else if (f == 4)
	{
		NofA = 6;
		point_1 = new point1[NofA];
		point_1[0].x = point[0].x; point_1[0].y = point[0].y;
		point_1[1].x = point[1].x; point_1[1].y = point[1].y;
		for (int i = 2; i < 6; i++)
		{
			cout << "Enter x" << i + 1 << " coordinate: ";
			cin >> point_1[i].x;
			cout << "Enter y" << i + 1 << " coordinate: ";
			cin >> point_1[i].y;
		}
	}
	else cout << "It`s wrong number";
}

int PolyLine::setXY()
{
	cout << "Choose what do you want:\n1 - Move polyline\n2 - Set another coordinates\n";
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
		double x, y;
		cout << "Enter point offset x\n";
		cin >> x;
		cout << "Enter point offset y\n";
		cin >> y;
		if (f == 1)
		{
			for (int i = 0; i < 3; i++)
			{
				point_1[i].x += x;
				point_1[i].y += y;
			}
		}
		else if (f == 2)
		{
			for (int i = 0; i < 4; i++)
			{
				point_1[i].x += x;
				point_1[i].y += y;
			}
		}
		else if (f == 3)
		{
			for (int i = 0; i < 5; i++)
			{
				point_1[i].x += x;
				point_1[i].y += y;
			}
		}
		else if (f == 4)
		{
			for (int i = 0; i < 6; i++)
			{
				point_1[i].x += x;
				point_1[i].y += y;
			}
		}
		else cout << "It`s wrong number";
	}
	else if (Choose == 2)
	{
		if (f == 1)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << "Enter new x" << i + 1 << " coordinate: ";
				cin >> point_1[i].x;
				cout << "Enter new y" << i + 1 << " coordinate: ";
				cin >> point_1[i].y;
			}
		}
		else if (f == 2)
		{
			for (int i = 0; i < 4; i++)
			{
				cout << "Enter new x" << i + 1 << " coordinate: ";
				cin >> point_1[i].x;
				cout << "Enter new y" << i + 1 << " coordinate: ";
				cin >> point_1[i].y;
			}
		}
		else if (f == 3)
		{
			for (int i = 0; i < 5; i++)
			{
				cout << "Enter new x" << i + 1 << " coordinate: ";
				cin >> point_1[i].x;
				cout << "Enter new y" << i + 1 << " coordinate: ";
				cin >> point_1[i].y;
			}
		}
		else if (f == 4)
		{
			for (int i = 0; i < 6; i++)
			{
				cout << "Enter new x" << i + 1 << " coordinate: ";
				cin >> point_1[i].x;
				cout << "Enter new y" << i + 1 << " coordinate: ";
				cin >> point_1[i].y;
			}
		}
		else cout << "It`s wrong number";
	}
	else cout << "It`s wrong number";
	return 0;
}

void PolyLine::getXY()
{
	cout << "Polyline vertexes coordinates:\n";
	if (f == 1)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "x" << i + 1 << " = " << point_1[i].x;
			cout << "  y" << i + 1 << " = " << point_1[i].y << endl;
		}
	}
	else if (f == 2)
	{
		for (int i = 0; i < 4; i++)
		{
			cout << "x" << i + 1 << " = " << point_1[i].x;
			cout << "   y" << i + 1 << " = " << point_1[i].y << endl;
		}
	}
	else if (f == 3)
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "x" << i + 1 << " = " << point_1[i].x;
			cout << "   y" << i + 1 << " = " << point_1[i].y << endl;
		}
	}
	else if (f == 4)
	{
		for (int i = 0; i < 6; i++)
		{
			cout << "x" << i + 1 << " = " << point_1[i].x;
			cout << "   y" << i + 1 << " = " << point_1[i].y << endl;
		}
	}
	else cout << "It`s wrong number";
}

PolyLine::~PolyLine()
{
}