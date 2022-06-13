#include <iostream>
using namespace std;

/*program for static data member
• Static data members are members of a class
• Only one instance of static members is created and shared by all objects
• They can be accessed directly using class name
*/
class test
{
public:
	int a;
	static int count;
	test()
	{
		a = 10;
		count++;
	}
};
int test::count = 0;
int main()
{
	test t1, t2;
	cout << t1.count << endl;
	cout << t2.count << endl;
	t1.count = 25;
	cout << t2.count << endl;
	cout << test::count << endl;
}

/*

?Can the data members private,protected declared as static Be accessed inside the static function??
A static member function can be called even if no objects of the class exist.
The static functions are accessed using only the class name and the scope resolution operator :: as shown below :
 Class_name::static_member_name
A static member function can only access static data member, other static member functions and any other functions from outside the class.
?Do we need to initialise static data members ?
Other than static and global data members initialisation is must.
Static and global are created in code section of main memory so they are created at loading time of program and initialised

 ?Is it necessary to initialize the static variable after the class i.e outside or can we do it before the class as well?
It is mandatory to declare the static variable outside the class.
It can be done after defining the class.

?Can we implement Static function outside class just like static variable or is it mandatory to implement it inside class?
Yes it can be done outside the class also.
Every function can be implemented either inside or outside.
Except friend function, which is implemented outside only.
?Can we make static variable and function private ?
Yes you can make static members also as private.
But they will be accessible only inside the class.
 */