#include <iostream>
using namespace std;

/*program for friend class
• Friend functions are global functions
• They can access member of a class upon their objects
• A class can be declared as friend on another class
• All the functions of friend class can access private and protected members of other class
*/

class your;
class my
{
private:
	int a;

protected:
	int b;

public:
	int c;
	friend your;
};
class your
{
public:
	my m;
	void fun()
	{
		m.a = 10;
		m.b = 10;
		m.c = 10;
	}
};
