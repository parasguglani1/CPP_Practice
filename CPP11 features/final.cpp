# include<iostream>
using namespace std;
    
/*program for final keyword

*/
class parent
// final //cannot be inherited

{
	virtual void show() final
	{}

};
class child:parent
{
	// void show() cannot be overridden
	// {}
};