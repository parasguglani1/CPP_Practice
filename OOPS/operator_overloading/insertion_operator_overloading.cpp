# include<iostream>
using namespace std;
    
/*program for operator overloading using friend functions

*/
class complex
{
private:
	int real;
	int img;
public:
	complex(int r=0, int i=0)

	{
	      real=r;
	      img=i;
	}
	void display()
	{
			cout<<real<<"+i"<<img<<endl;
		}
		friend ostream & operator<<(ostream &out,complex &c); // friend function
	};
    


	ostream & operator<<(ostream &out,complex &c)
	{
		out<<c.real<<"+i"<<c.img<<endl;
		return out;
	}
/* 
*•ostream & operator<<(ostream &os, Complex &c);

• It is a global function.
• It must be declared as fired inside class Complex.
• It must take 2 parameters.
1. ostream
2. Object of your class.
*• ostream parameter must be reference
*•Return type should be reference of ostream 
?How cout works?
• If Complex comp; is a complex object, then
• cout<<comp;
• Here operator<< is called and 2 parameters are passed
1. cout
2. comp
?Why return by reference?
•usually if you write cout<<x<<y; then x is printed using cout and
after printing x it should become cout<<y, means y should also
get cout.
• Similarly if we write
cout<<comp<<endl;
• Operator<< is called by passing cout and comp then it returns ostream by reference.
• Result of return by reference comes on left side so it becomes
• cout<<endl; Then endl is printed */



	int main()
	{
		complex c(10,5);
		cout<<c<<endl; // if we returned void then we can't use endl here it must return ostream 
		operator<<(cout,c);
	}