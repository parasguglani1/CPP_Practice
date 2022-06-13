#include <iostream>
using namespace std;

/*program for destructor
//* destrcutor is used to free the memory or resources allocated to the object
//* destructor cannot be overloaded
//* destructor is called when object is destroyed usually at the end of the program or mail function
//* destructor cannt return any value like constructor

*/
class demo
{
	int *p;

public:
	demo()
	{
		p = new int[10];
		cout << "constructor of demo" << endl;
	}
	~demo()
	{
		delete[] p; // delete[] is used to delete the array from heap memory
		cout << "destructor of demo" << endl;
	}
};
void fun()
{
	// demo d; //* cons and destr of demo is called automatically
	demo *p = new demo(); //* only cons of demo is called but not destr because memory is allocated in heap
	delete p;			  //* destr of demo is called
}
int main()
{
	fun();
}