/*

?What is a default constructor?
•A constructor which dent take any parameters is called as default
constructor.
•There are 2 Types of default constructors
1.Compiler provided
2.User-defined
Compiler provided default constructor
•If we don’t write any constructor, compiler will provide a default constructor.
•It will create the object, but doesn’t initialise data members.
•If we define our own contractor, then compiler will not provide
*default constructor.
?Why we write constructor?
• We can initialise the data members of an object.
• If data members are initialised then we can use the object.
Type of Constructors
*There are 3 type of constructors.
1.Non-parameterised (also called as default)
2.Parameterised
3.Copy constructor
?Do we have to write all constructors ?
•It is better to write all constructors.
•I am not writing it in every lecture because I have to focus on actual topic.
Why copy constructor should take reference?
•If parameter is call by value then it will create new object for
parameter.
•Constructor will call constructor again to create the object of
parameter.
•It will be become a recursive call to constructor.
*Can we initialise the variables directly?
•Yes you can initialise. But values will always be same.
•Constructor will allow us to initialise with desired values.

?Can we read values inside the constructor using cin?
•If main() is creating object then, it is better to read values inside
main and pass values to constructor.
•Using cin means, interacting with user. If user interaction is done
in main() then it is a good design.
*Copy constructor vs Assignment operator
their working is same but usage is different.
Rectangle r1(10,5);
Rectangle r2(r1); // copy constructor is called
Rectangle r3=r1; // assignment operator is called


 */
#include <iostream>
using namespace std;

/*program for creating default constructors

*/
class Rectangle
{
private:
	int length;
	int breadth;
	int *ptr;

public:
	//  Rectangle(); //default constructor
	Rectangle(int l, int b);	   // parameterized constructor
	Rectangle(const Rectangle &r); // copy constructor
	void setLength(int l);		   // setter or mutator
	int area()
	{
		return length * breadth;
	}
};

// Rectangle::Rectangle()
// {
//  length=1;
//  breadth=1;
// }
Rectangle::Rectangle(int l = 0, int b = 0) // will also work as default constructor
{
	length = l;
	breadth = b;
	ptr = new int[length];
}
Rectangle::Rectangle(const Rectangle &r)
{
	length = r.length + 1;
	breadth = r.breadth;
	ptr = new int[length];
	cout << "Copy constructor called" << endl;
	//   if we didn't write this copy cons default copy constructor will be called which will point to the same memory location (i.e. shallow copy)
}

void Rectangle::setLength(int l)
{
	length = l;
}

int main()
{

	Rectangle r1;
	cout << r1.area() << endl;

	Rectangle r2(10, 5);
	cout << r2.area() << endl;

	Rectangle r3 = r2; // copy constructor is called because object is created in same line
	cout << r3.area() << endl;
	// can also be written as Rectangle r3(r2);
	Rectangle r4;
	r4 = r2; // assignment operator is called
	// cout<<r1.area()<<endl;
	// cout<<r2.area()<<endl;

	cout << r4.area() << endl;

	r2.setLength(20);

	cout << "after20" << endl;

	cout << r1.area() << endl;
	cout << r2.area() << endl;
	cout << r3.area() << endl;
	cout << r4.area() << endl;

	return 0;
}

/*
Deep Copy vs Shallow Copy Constructors
Deep Copy:
• deep copy constructor is useful for making a copy of dynamic
structures which are in heap. like Dynamic Array ,Linked List,
Trees etc.
• if member of a class is a pointer 'p' and it is pointing to array or object in heap.
• if object A is having its member 'p' pointing on an array or object in heap and you are making a copy of A as B then 'p' of B will also point on same array or object of A.
• to have separate copy of B another array or object should be created and make 'p' point on it.
• if a copy constructor is doing it, we say Deep copy constructor.
Shallow Copy: provided by compiler.
• Copy constructor will copy only the members of an object.
• If an object is holding any memory in heap, it will not be copied.*/
