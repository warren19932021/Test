#include<iostream>
#include<math.h>
using namespace std;


   class Shape 
   {

  public:
        virtual float CalculateArea(int){

		return 0;
	
	};

        virtual float CalculateCircumference(){

		return 0;
	
	};

  public:
  //private:
      float area;
      float circumference;

   };


  class Square : public Shape
   {
	   public:
/*	  
	  Square(float edge_length)
	  {
		  area = edge_length*edge_length;
	          return area; 
	  };
*/
    	  float SideLength;

	  
//	  float  CalculateArea(){return SideLength*SideLength;};
	  float  CalculateArea(float SideLength){
	  //float  CalculateArea(){
		  area = SideLength*SideLength;
	          return area; 
	  };
	  float  CalculateCircumference(float SideLengthnew){
		  circumference = 4*SideLengthnew;
	          return circumference; 
	  };
   }; 

/*

  class Rectangle : public Shape
   {
	   public:


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




  class Regular_Pentagon : public Shape
   {
	   public:


    	  float SideLength;
          
	  //float  CalculateArea(){return SideLength*SideLength;};
	  float  CalculateArea(){
		  area = 5./4*SideLength*SideLength*tan(54./180*M_PI);
	          return area; 
	  };

	  float  CalculateCircumference(){
		  circumference = 5*SideLength;
	          return circumference; 
	  };

   }; 

*/



   void test()
   {


	   //Shape * shape = new Square(10);
	   //Square * shape = new Square(10);
	   Square * shape = new Square;
	   //Regular_Pentagon * shape = new Regular_Pentagon;

   	       //     shape->SideLength=10;
            
		    cout<<"Area of Square: "<<shape->CalculateArea(10)<<endl;
		    cout<<"circumference of Square: "<<shape->CalculateCircumference(10)<<endl;



		    cout<<"Hello from test function "<<endl;

   }



   int main(){
   
       
      test();

      return 0;

   
   
   }
