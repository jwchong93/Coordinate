#ifndef __COORDINATE_H__
#define __COORDINATE_H__

typedef struct {
	int x;
	int y;
}Coordinate;

Coordinate setCoordinate (int x,int y);
Coordinate multiplyCoordinate (int x, int y,int multiplier);
#endif //__COORDINATE_H__
