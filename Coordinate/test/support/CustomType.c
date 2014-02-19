#include "unity.h"
#include "CustomType.h"
void assertEqualCoordinate(	Coordinate expected,		//This the expected instance
							Coordinate actual,			//This the actual instance
							int line,					//This the line number where the error happens
							char *message)				//This is the error message
{
	UNITY_TEST_ASSERT_EQUAL_INT(expected.x,actual.x,line,NULL);
	UNITY_TEST_ASSERT_EQUAL_INT(expected.y,actual.y,line,NULL);
							
}