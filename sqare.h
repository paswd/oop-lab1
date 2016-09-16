#ifndef _SQUARE_H_
#define _SQUARE_H_

#include <string>
#include "geometry.h"

class Square : public Figure
{
private:
	double width;
public:
	Square();
	~Square();
	double Figure_square() override;
	double Print() override;
	
}


#endif
