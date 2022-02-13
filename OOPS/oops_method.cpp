#include <bits/stdc++.h>
using namespace std;

// Where the class in stored?
// • In C++, class is not stored in main memory
// •All member functions of a class are stored in Code section at loading time.
// • If an object of a class is created inside a function then memory for all data members will be created in a stack of a function. 
class Rectangle
{
private:
 int length;
 int breadth;
 //best practice to declare private variables to prevent sata mishandling by the user and functions in public 
 //we write perfect code in classes
public:
 Rectangle(); //default constructor
 Rectangle(int l,int b); //parameterized constructor
 Rectangle(Rectangle &r); //copy constructor
 int getLength(){return length;} //getter or accessor //inline function
 int getBreadth(){return breadth;}  //getter or accessor //inline function
 void setLength(int l); //setter or mutator
 void setBreadth(int b); //setter or mutator
 int area(); //facilitator  function
 int perimeter(); //function
 bool isSquare(); //function
 ~Rectangle(); //destructor
};

int main()
{
 Rectangle r1(10,10);
    Rectangle r2(r1);
 cout<<"Area "<<r1.area()<<endl;
 if(r1.isSquare())
 cout<<"Yes"<<endl;

r1.setLength(20);
cout<<"Area "<<r1.area()<<endl;
   return 0;
}
Rectangle::Rectangle()
{
 length=1;
 breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
 length=l;
 breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
 length=r.length;
 breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
 length=l;
}
void Rectangle::setBreadth(int b)
{
 breadth=b;
}
int Rectangle::area()
{
 return length*breadth;
}
int Rectangle::perimeter()
{
 return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
 return length==breadth;
}

Rectangle::~Rectangle()
{
 cout<<"Rectangle Destroyed";
}