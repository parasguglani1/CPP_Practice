# include<iostream>
using namespace std;
    
/*program for using base and derived class

*/
class base
{
public:
    	base()
	{
	  	cout<<"non-param base"<<endl;
    }
   	base(int x)
	{
	 	 cout<<"param of base"<<x<<endl;
	}
};
class derived:public base
{
public:
	derived()
	{
		cout<<"non-param derived"<<endl;
	}

	derived(int y)
	{
		cout<<"param of derived"<<y<<endl;
	}

	derived(int x,int y):base(x) //calling parameterised base cons
	
    {
		cout<<"param of derived"<<endl;
	}



/*  Constructors of base class is executed first then the constructor of derived class is executed.
• By default, non-parameterised constructor of base class is executed.
• parameterised constructor of base class must be called from derived class constructor */
/* 
Private member of Base in Derived class Constructor
No. Private members of Base class are not accessible in derived class.
Private members of Base class are inherited to Derived class, but not
accessible */

/* Copy Constructor by reference
• Copy constructor must take parameter by reference. If it is taking parameter
by value then it has to create an object and it will class constructor again.
• It may become recursive call to the constructor. Constructor calling
constructor */

/* Yes constructor can be declared as private, but we cannot create the
object directly. It can be done using static functions
Example:
class Test
{
int x,y;
Test(int a, int b)
{
x=a;
y=b;
}
public:
static Test * CreateObject() // this function will create an object.
{
Test t=new Test(10,10);
return t;
}
};
int main()
{
Test *t=Test::CeateObject();
} */

};
int main()
{
	derived(5,10);

}



	   