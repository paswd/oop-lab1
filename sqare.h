#ifndef SQUARE_H
#define SQUARE_H

#include <cstdlib>
#include <iostream>
#include "figure.h"

class Square : public Figure {
public:
	//Square();
	Square(std::istream &is);
	Square(Posinion in_pos, double length);
	Square(const Square &orig);
	double Square() override;
	void Print() override;
	virtual ~Square();
private:
	Posinion pos;
	double len;
};
#endif /* SQUARE_H */
