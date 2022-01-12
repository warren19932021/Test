#include<iostream>
float cir(float);
float sq(float);
float rec(float,float);
using namespace std;

//main function
int main()
{
//clear the screen.
//clrscr();
//declare variables as int.
float a,r,l,b;
//Input the radius, sides and length and breadth.
cout<<"Enter the radius of circle"<<endl;
cin>>r;
cout<<"Enter the side of square"<<endl;
cin>>a;
cout<<"Enter the length and breadth of rectangle"<<endl;
cin>>l>>b;
//calculate area using functions and print it.
cout<<"Area of circle is "<<cir(r)<<endl;
cout<<"Area of square is "<<sq(a)<<endl;
cout<<"Area of rectangle is "<<rec(l,b)<<endl;
//get character
//getch();
return 0;


}

//functions
float cir(float x)
{
float area;
area=3.14*x*x;
return(area);
}

float sq(float x)
{
float area;
area=x*x;
return(area);
}

float rec(float x,float y)
{
float area;
area=x*y;
return(area);
}

