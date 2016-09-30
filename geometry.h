#ifndef GEOMETRY_H
#define GEOMETRY_H

class Position {
public:
	double x;
	double y;

	void Input(std::istream &is);
	void Print();
};

double Absolute(double num);


#endif /* GEOMETRY_H */
