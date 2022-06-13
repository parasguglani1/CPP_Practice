#include <iostream>
using namespace std;

/*program for abstract class

*/
class car
{
public:
	virtual void start() = 0;
};
class innova : public car
{
public:
	void start()
	{
		cout << "innova started" << endl;
	}
};
class swift : public car
{
public:
	void start()
	{
		cout << "swift started" << endl;
	}
};
int main()
{
	// car c;
	car *ptr = new innova();
	ptr->start();
	ptr = new swift();
	ptr->start();
}
/* Class having pure virtual function is a abstract class
• Abstract class can have concrete also.
• Object of abstract class cannot be created
• Derived class can must override pure virtual function, otherwise it will also become a abstract
class.
• Pointer of abstract class can be created
• Pointer of abstract class can hold object of derived class
• Abstract classes are used for achieving polymorphism
•
• Base class can be
• Concrete
• Abstract with some concrete and some pure virtual functions
• All virtual functions */

/* Abstract Function
If a member function is not having a body then it is an abstract
function.
Example:
class Test
{
 public:
 void fun(); // body is not defined outside
};
Abstract Class
If a class is having an abstract function then class becomes
abstract.
If a class is having pure virtual function then it becomes abstract.
We can declare pointer of abstract class
We can create object of abstract class but cannot call undefined
functions.
Abstract classes are useful for achieving polymorphism */

// An abstract class is a class that is designed to be specifically used as a base class. An abstract class contains at least one pure virtual function. You declare a pure virtual function by using a pure specifier (= 0) in the declaration of a virtual member function in the class declaration.

// if an abstract class is being used in a class then its method must be overridden in the derived class.
