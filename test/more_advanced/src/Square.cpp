#include "../include/Square.h"
#include <iostream>
using namespace std;
 
  Square::Square(float sideLength)
  {
	 SideLength = sideLength;
  };

  Square::~Square()
  {
  };
	  
  float Square::CalculateArea(){
	 float  area = SideLength*SideLength;
	 return area; 
	};
	float  Square::CalculateCircumference(){
	 float  circumference = 4*SideLength;
	return circumference; 
	};