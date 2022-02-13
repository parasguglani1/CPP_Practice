#include<iostream>
using namespace std;
    
/*program for friend function

//?Can two different classes have same friend function ?
Yes,we can also have the same friend function of two different classes .

//?Don’t we have to declare friend function in the same manner as we declare friend class ?
 No,we declare friend function inside the class and implement them
outside the class.
In case of friend class, we are using the class by creating its object, so at least it’s name should be declare before using it. So we are declaring it before the class.

//?What is the difference b/w Friend Operator Overloading and Friend Function
Friend functions are global functions that can access all member of an object of a class.
Operator Overloading can be done using member functions as well as friend functions.
Operator Overloading done by using friend function is called as Friend Operator Overloading.

//!Friend versus Accessor/Mutator function
Accessor and Mutator functions can access private
members directly where as, Friend Functions can access member upon object.
Friend functions are used if a function have to access object of multiple classes, they act as connector.  Usually operator overloading is done using Friend functions.

//?If variable a and b are private in a constructor how are the initialized ?
a and b can be initialized in a constructor, they can be of any access
specifiers types public, private, or protected.
Basically you can access all type of members inside same class regardless
it is private, protected or public
*/
class test
{
private:
	int a;
protected:
	int b;
public:
	int c;
	friend void fun();
};
void fun()
{
	test t;
	t.a=10;
	t.b=15;
	t.c=9;
}