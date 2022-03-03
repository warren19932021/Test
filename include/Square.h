#include "Shape.h"
class Square: public Shape{

 public:
    	Square(float);
        ~Square();

       float CalculateArea();
       float CalculateCircumference();

 public:
    	  float SideLength;

};


