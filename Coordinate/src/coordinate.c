#include <stdio.h>
#include "coordinate.h"
#include "multiply.h"				//Important, so that the multiply() can be called

Coordinate setCoordinate (int x, int y)
{
	Coordinate coor;
	coor.x = x;
	coor.y = y;
	return coor;
}

Coordinate multiplyCoordinate (int x, int y,int multiplier)
{
	Coordinate coor;
	coor.x = multiply(x,multiplier);
	coor.y = multiply(y,multiplier);
	return coor;
}