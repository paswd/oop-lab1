#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <cstdlib>
#include <iostream>
#include "figure.h"

class Rectangle : public Figure {
public:
	//Rectangle();
	Rectangle(std::istream &is);
	Rectangle(Posinion in_pos, double len_a, double len_b);
	Rectangle(const Rectangle &orig);
	double Square() override;
	void Print() override;
	virtual ~Rectangle();
private:
	Posinion pos;
	double LenA;
	double LenB;
};
#endif /* RECTANGLE_H */
