#include "Picture.h"

void Picture::add(Point* N)
{
	points.push_back(N);
}

void Picture::erase(int N)
{
	if (points.size() <= N)
	{
		std::cout << "There are no elemets under number " << N << endl;
	}
	else
	{
		auto iter = points.cbegin();
		points.erase(iter + N - 1);
	}
}

void Picture::show(int N)
{
	if (points.size() <= N)
	{
		std::cout << "Element number " << N + 1 << " does not exist" << endl;
	}
	else
	{
		return points[N]->getXY();
	}
}

void Picture::get_color(int N)
{
	if (points.size() <= N)
	{
		std::cout << "Element number " << N + 1 << " has no color since it does not exist" << endl;
	}
	else
	{
		return points[N]->getColor();
	}
}