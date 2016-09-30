#include <iostream>
#include <cmath>
#include "geometry.h"
#include "trapeze.h"

using namespace std;

/*Trapeze::Trapeze() : Trapeze(0, 0, 0) {

}*/

Trapeze::Trapeze(Position in_pos1, Position in_pos2, double len_a, double len_b) : pos1(in_pos1), pos2(in_pos2), LenA(len_a), LenB(len_b) {
	cout << "Trapeze created:" << endl;
	this->Print();
}
Trapeze::Trapeze(std::istream &is) {
	this->pos1.Input(is);
	this->pos2.Input(is);
	is >> this->LenA;
	is >> this->LenA;
}
Trapeze::Trapeze(const Trapeze &orig) {
	this->pos1 = orig.pos1;
	this->pos2 = orig.pos2;
	this->LenA = orig.LenA;
	this->LenB = orig.LenB;
	cout << "Trapeze copy created" << std::endl;
}
double Trapeze::Square() {
	return (this->LenA + this->LenB) * Absolute(this->pos1.y - this->pos2.y) / 2;
}
void Trapeze::Print() {
	cout << "Positions: ";
	this->pos1.Print();
	this->pos2.Print();
	cout << "Side lengths: " << endl;
	cout << "A: " << this->LenA << endl;
	cout << "B: " << this->LenB << endl;
}
Trapeze::~Trapeze() {
	cout << "Trapeze deleted" << std::endl;
}
