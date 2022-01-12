#include<iostream>
#include<math.h>
using namespace std;


   class Shape 
   {

  public:
        virtual float CalculateArea(int){
        //virtual float CalculateArea(int){

		return 0;
	
	};

        virtual float CalculateCircumference(){

		return 0;
	
	};

//  public:
  private:
//      float area;
//      float circumference;

   };


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




   void test()
   {


	   //Shape * shape = new Square(10);
	   Square * shape = new Square(10);
	   //Square * shape = new Square;
	   //Regular_Pentagon * shape = new Regular_Pentagon;

   	       //     shape->SideLength=10;
            
		    cout<<"Area of Square: "<<shape->CalculateArea()<<endl;
		    cout<<"circumference of Square: "<<shape->CalculateCircumference()<<endl;



		    cout<<"Hello from test function "<<endl;

   }



   int main(){
   
       
      test();

      return 0;

   
   
   }
