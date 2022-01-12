#include "../include/Shape.h"
#include <iostream>
#define Verbose 20
//#define Verbose 0
using namespace std;

  Shape::Shape()
  {
    cout << "Hello from Shape" << endl;
   
  };


  Shape::~Shape()
  {
  };

  Rectangle::Rectangle(float length,float width)
  {
	 Length = length; Width = width;
  };

  Rectangle::~Rectangle()
  {
  };
	  
  float Rectangle::CalculateArea(){
	 float  area = Length*Width;
	 return area; 
	};
	float  Rectangle::CalculateCircumference(){
	 float  circumference = 2*(Length+Width);
	return circumference; 
	};