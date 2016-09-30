#include <iostream>
#include <cstdlib>
#include <string>
#include "geometry.h"
#include "figure.h"
#include "rectangle.h"
#include "square.h"
#include "trapeze.h"

using namespace std;    

int main(int argc, char** argv) {
	cout << "Figure: Rectangle (Position, Length1, Length2)" << endl; 
	Figure *ptr = new Rectangle(std::cin);
	ptr->Print();
	cout << "Square: " << ptr->Square() << std::endl;
	delete ptr;

	cout << "Figure: Square (Position, Length)" << endl; 
	ptr = new FSquare(std::cin);
	ptr->Print();
	cout << "Square: " << ptr->Square() << std::endl;
	delete ptr;

	cout << "Figure: Trapeze (Position1, Position2, Length1, Length2)" << endl; 
	ptr = new Trapeze(std::cin);
	ptr->Print();
	cout << "Square: " << ptr->Square() << std::endl;
	delete ptr;
	return 0;
}