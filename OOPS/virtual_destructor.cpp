#include <iostream>
using namespace std;

/*program for  virtual destructor

*/
class base
{
public:
	virtual ~base()
	{
		cout << "destructor of base" << endl;
	}
};
class derived : public base
{
public:
	~derived()
	{
		cout << "destructor of derived" << endl;
	}
};

void fun()
{
	base *p = new derived(); // base pointer pointing to derived object
	delete p;				 // destructor of base is called only normally but since base is virtual it will call destructor of derived then destructor of base
	// derived d; //normally destructor of derived is called first and then destructor of base is called
}
int main()
{
	fun();
}