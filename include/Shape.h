#ifndef SHAPE1_H
#define SHAPE1_H

class Shape
{
public:
	Shape();
	~Shape();

        virtual float CalculateArea(){};
        virtual float CalculateCircumference(){};
        void Regular_Pentagon();

};


class Rectangle: public Shape{

 public:
    	Rectangle(float,float);
        ~Rectangle();

       float CalculateArea();
       float CalculateCircumference();

 public:
    	  float Length;
          float Width;

};


#endif
