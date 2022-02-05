#include <iostream>
using namespace std;

// class Test{
//  private:
//  int value;
// public:
// void fun(int x){
// this->value=x;
// std::cout<<"value="<<this->value<<std::endl;
// }
// };
// // It represents current object.
// // • It is useful in avoiding variable name conflict.

class rectangle
{
private:
	int length;
	int breadth;

public:
	rectangle(int length, int breadth)
	{
		this->length = length;
		this->breadth = breadth;
	}
	int area()
	{
		return length * breadth;
	}
};

// Example for variable name conflict.
class Test
{
private:
	int value;

public:
	void fun(int value)
	{
		// here parameter name and data member name is same “value” to access data member “this” is used.
		this->value = value;
		std::cout << "value=" << this->value << std::endl;
	}
};

int main()
{
	Test t1, t2; // both t1 and t2 are having “value”
	t1.fun(10);	 // “this” inside fun means “value” of t1.
	t2.fun(20);	 // “this” inside fun means “value” of t2.
	rectangle r1(10, 5);
	cout << r1.area() << endl;

	// 161,163,75,76
}