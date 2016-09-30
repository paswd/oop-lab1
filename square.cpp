#include "square.h"
#include <iostream>
#include <cmath>

using namespace std;

/*Square::Square() : Square(0, 0, 0) {

}*/

Square::Square(Posinion in_pos, double length) : pos(in_pos), len(length) {
	cout << "Square created:" << endl;
	this->Print();
}
Square::Square(std::istream &is) {
	this->pos.Input(is);
	is >> this->len;
}
Square::Square(const Square &orig) {
	this->pos = orig.pos;
	this->len = orig.len;
	cout << "Square copy created" << std::endl;
}
double Square::Square() {
	return this->len * this->len;
}
void Square::Print() {
	cout << "Position: ";
	this->pos.Print();
	cout << "Side length: " << this->len << endl;
}
Square::~Square() {
	cout << "Square deleted" << std::endl;
}
