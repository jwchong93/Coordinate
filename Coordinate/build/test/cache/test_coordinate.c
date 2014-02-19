#include "unity.h"
#include "mock_Multiply.h"
#include "coordinate.h"
#include "CustomType.h"
void setUp(){}

void tearDown () {}



void test_setCoordinate_should_return_proper_coordinate()

{

 Coordinate actualCoor={0,0};

 Coordinate expectedCoor={3,9};





 printf("Line number %d\n",14);

 actualCoor=setCoordinate(3,7);





 assertEqualCoordinate (expectedCoor,actualCoor,18,((void *)0));;

}



void test_multiplyCoordinate_should_return_proper_multiplied_coordinate()

{

 Coordinate coor={0,0};



 multiply_CMockExpectAndReturn(25, 2, 4, 8);

 multiply_CMockExpectAndReturn(26, 14, 4, 56);



 coor = multiplyCoordinate(2,14,4);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((coor.x)), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((56)), (_U_SINT)((coor.y)), (((void *)0)), (_U_UINT)30, UNITY_DISPLAY_STYLE_INT);



}
