#include "geometry.h"
#include <iostream>
#include <cmath>

void Position::Input(std::istream &is)
{
	is >> this->x;
	is >> this->y;
}

void Position::Print()
{
	cout << "(" << this->x << ":" << this->y << ")" << endl;
}

double Absolute(double num)
{
	if (num < 0)
		num = -num;

	return num;
}
