/* Base class Pointer pointing to derived class object
• Base class pointer can point on derived class object
• But only those functions which are in base class, can be called
• If derived class is having overrides functions they will not be called unless base class functions
are declared as virtual
• Derived class pointer cannot point on base class object
• If a Base Class pointer is pointing on derived class object then
using the base class pointer we can access only inherited methods
(methods defined in base class) on derived class object.
 */

#include <iostream>
using namespace std;

/*program for demo#1-base class pointer derived class object

*/
class base
{
public:
	void fun1()
	{
		cout << "fun1 of base" << endl;
	}
};
class derived : public base
{
public:
	void fun1()
	{
		cout << "fun2 of derived" << endl;
	}
};
int main()
{
	derived d;
	base *ptr = &d;
	ptr->fun1();
	// ptr->fun2();
	return 0;
}
/*

# include<iostream>
using namespace std;

program for demo#2-base class pointer derived class object


class rectangle
{
public:
	void area()
	{
		cout<<"area of rectangle"<<endl;
	}
};
class cuboid:public rectangle
{
public:
	void volume()
	{
		cout<<"cuboid volume"<<endl;
	}
};
int main()
{
	rectangle r;
	cuboid *q=&r;
	cuboid c;
	c.area();
	c.volume();
	p->area();
	p->volume();
	return 0;
}

 */

/*

# include<iostream>
using namespace std;

program for demo#3-base class pointer derived class object


class basicCar
{
public:
	void start()
	{
		cout<<"car started"<<endl;
	}
};
class advanceCar:public basicCar
{
public:
	void playmusic()
	{
		cout<<"playing music"<<endl;
	}
};
int main()
{
	basicCar b;
	advanceCar *q=&b;
	advanceCar a;
	a.start();
	a.playmusic();
	basicCar *ptr=&a;
	ptr->start();
	ptr->playmusic();
}
 */