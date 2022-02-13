# include<iostream>
using namespace std;
    
/*program for creating structure and class

*/
struct demo // or class demo
{
public:
	int x;
	int y;
        void display()
 	{
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	demo d;
	d.x=10;
	d.y=20;
	d.display();
}



// •C++ supports both structure and class
// • structure in C++ can have data members and member functions.
// •All members of a structure are public by default.
// • class can contain data members and member functions
// •All members of a class are private by default. 
