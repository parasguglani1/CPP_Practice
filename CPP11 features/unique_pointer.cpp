# include<iostream>
# include<memory>
using namespace std;
    
/*program for using unique pointer
//shared_ptr multiple pointers can point to same object and it maintains the count of number of pointers pointing to same object use_count()

//unique_ptr only one pointer can point to that object at a time
//weak pointer multiple pointer can point to same object but it does not maintain the count of number of pointers pointing to same object 
use smart pointers for memory management i.e to avoid memory leaks  
//it will automatically delete the object when the last shared_ptr pointing to it is deleted


*/
class rectangle
{
	int length;
      	int breadth;
public:
	rectangle(int l,int b)
	{
		length=l;
	      	breadth=b;
	}
     	int area()
	{
		return length*breadth;
	}
};
int main()
{
	unique_ptr<rectangle> ptr(new rectangle(10,5));
	cout<<ptr->area()<<endl;
	unique_ptr<rectangle> ptr2;
	ptr2=move(ptr);
	cout<<ptr2->area();
	// cout<<ptr->area(); // ptr is not pointing to any object because it is moved to ptr2  
}