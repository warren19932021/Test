#include<iostream>
#include<math.h>
//#include "include/Shape.h"
#include "include/Square.h"
using namespace std;




   void test()
   {


//	   Shape * shape = new Square(10);
//	   Shape * shape = new Square(10);
      Shape * shape = new Rectangle(10,20);      
		cout<<"Area of Square: "<<shape->CalculateArea()<<endl;
		cout<<"circumference of Square: "<<shape->CalculateCircumference()<<endl;
		cout<<"Hello from test function "<<endl;

   }



   int main(){
   
       
      test();

      return 0;

   
   
   }
