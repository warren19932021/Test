#include<iostream>
#include<math.h>
#include "include/Shape.h"
using namespace std;


   void test()
   {


	   //Shape * shape = new Square;
	   Square * shape = new Square(10);
	   //Shape * shape = new Shape;

   	     //       shape->SideLength=10;
            
		    cout<<"Area of Square: "<<shape->CalculateArea()<<endl;
		    cout<<"circumference of Square: "<<shape->CalculateCircumference()<<endl;



		    cout<<"Hello from test function "<<endl;

   }



   int main(){
   
       
      test();

      return 0;

   
   
   }
