#include <iostream>
#include <string>

#include "Point.h"
#include "ColoredPoint.h"
#include "Line.h"
#include "ColoredLine.h"
#include "PolyLine.h"
#include "Picture.h"

using namespace std;

#define II system("pause");
#define cls system("cls");

int main()
{
    cout << "ColoredPoint\n"; 
	Picture a;
	a.add(new ColoredPoint());
	II; cls;
	cout << "Line\n\n";
	a.add(new Line());
	II; cls;
	cout << "ColoredLine\n\n";
	a.add(new ColoredLine());
	II; cls;
	cout << "PolyLine\n\n";
	a.add(new PolyLine());
	II; cls;
	cout << "Done\n\n";
	II; cls;
	for (int i = 0; i < 4; i++)
	{
		a.show(i);
		a.get_color(i);
		cout << endl;
	}
	cout << "Which element do you want to erase?" << endl;
	int q;
	cin >> q;
	cout << "Erasing element number " << q << endl;
	II; cls;
	a.erase(q);
	for (int i = 0; i < 4; i++)
	{
		a.show(i);
		a.get_color(i);
		cout << endl;
	}
	II; cls;
}