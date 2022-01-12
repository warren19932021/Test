#ifndef SHAPE1_H
#define SHAPE1_H

class Shape
{
public:
	Shape();
	~Shape();

        virtual float CalculateArea(){};
        virtual float CalculateCircumference(){};
       //void Square();
       //float Square();
       void Rectangle();
       void Regular_Pentagon();

 // public:
 //     float area;
 //     float circumference;



};

#endif
