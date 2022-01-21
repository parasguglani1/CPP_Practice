// Create object in Stack or Heap
// Stack:
// Rectangle r1; // Valid
// Rectangle r1( ); // invalid, don’t give empty brackets.
// Heap:
// Rectangle *p; // pointer, it is created in stack.
// p=new Rectangle(); // object is created in heap. Empty () can be
// given.
// Pointer size

// Every pointer takes 8 bytes of memory in latest compiler.
// Size of pointer is not dependent on its datatype.
// Note: I have assumed that pointer takes 2 bytes, to make explanation
// easy
// '->' vs '.'
// Stack: if an object is created in stack, use ‘.’
// Rectangle r1;
// r1.area();
// Heap: if an object is created in heap then use ‘->’
// Rectangle *p;
// p=new Rectangle();
// p->area();


# include<iostream>
using namespace std;
    
/*program for writing pointer to an object

*/
class rectangle
{
public:
	int length;
	int breadth;
	int area()
	{
		return length*breadth;
	}

	int perimeter()
        {
		return 2*(length+breadth);
	}
};
int main()
{	
	rectangle r1;
	rectangle *ptr;// or we can say rectangle *ptr=new rectangle();
	ptr=&r1;//instead of these two lines
	ptr->length=10;
	ptr->breadth=5;

	cout<<ptr->area()<<endl;
	cout<<ptr->perimeter()<<endl;  


}
