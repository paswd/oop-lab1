#include "rectangle.h"
#include <iostream>
#include <cmath>

using namespace std;

/*Rectangle::Rectangle() : Rectangle(0, 0, 0) {

}*/

Rectangle::Rectangle(Posinion in_pos, double len_a, double len_b) : pos(in_pos), LenA(len_a), LenB(len_b) {
	cout << "Rectangle created:" << endl;
	this->Print();
}
Rectangle::Rectangle(std::istream &is) {
	this->pos.Input(is);
	is >> this->LenA;
	is >> this->LenB;
}
Rectangle::Rectangle(const Rectangle &orig) {
	this->pos = orig.pos;
	this->LenA = orig.LenA;
	this->LenB = orig.LenB;
	cout << "Rectangle copy created" << std::endl;
}
double Rectangle::Square() {
	return this->LenA * this->LenB;
}
void Rectangle::Print() {
	cout << "Position: ";
	this->pos.Print();
	cout << "Side lengths: " << endl;
	cout << "A: " << this->LenA << endl;
	cout << "B: " << this->LenB << endl;
}
Rectangle::~Rectangle() {
	cout << "Rectangle deleted" << std::endl;
}
