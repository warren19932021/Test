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

/*
        virtual float Shape::CalculateArea(){

		return 0;
	
	};

        virtual float Shape::CalculateCircumference(){

		return 0;
	
	};

*/



  class Square : public Shape
   {
	   public:
    	  float SideLength;
	  
	  Square(float edge_length)
	  {
		  SideLength = edge_length;
	  };


	  
	  //float  CalculateArea(){return SideLength*SideLength;};
	//  float  CalculateArea(float SideLength){
	  float  CalculateArea(){
		float  area = SideLength*SideLength;
	          return area; 
	  };
	  float  CalculateCircumference(){
		float  circumference = 4*SideLength;
	          return circumference; 
	  };

   };





/*

  float Shape::Square()
   {


    	  float SideLength;

  Square::Square(float edge_length)
	  {
		  SideLength = edge_length;
	  };


          
	  //float  CalculateArea(){return SideLength*SideLength;};
	  float  CalculateArea(){
		float  area = SideLength*SideLength;
	          return area; 
	  };

	  float  CalculateCircumference(){
		  circumference = 4*SideLength;
	          return circumference; 
	  };

   }; 


*/
  void Shape::Rectangle()
   {

    	  float SideLength;
          
	  //float  CalculateArea(){return SideLength*SideLength;};
	  float  CalculateArea(){
		  area = SideLength*SideLength;
	          return area; 
	  };

	  float  CalculateCircumference(){
		  circumference = 4*SideLength;
	          return circumference; 
	  };

   }; 




  void Shape::Regular_Pentagon()
   {

    	  float SideLength;
          
	  //float  CalculateArea(){return SideLength*SideLength;};
	  float  CalculateArea(){
		  area = 5./4*SideLength*SideLength*tan(54./180*M_PI);
	          return area; 
	  };

	  float  CalculateCircumference(){
		  circumference = 4*SideLength;
	          return circumference; 
	  };

   }; 




