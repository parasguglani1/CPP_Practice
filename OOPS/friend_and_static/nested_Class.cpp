# include<iostream>
using namespace std;
    
/*program for nested or inner class

*/
class outer
{
	class inner;
public:
	void fun()
	{
		i.display();
	}
	class inner
	{
	public:
		void display()
		{
			cout<<"display of inner"<<endl;
		}
	};
	inner i;
};
int main()
{
	outer::inner i;
}



/* 

?Can we create outer class object in inner class and access the data members of the outer class inside the inner class ?
Inner class is useful only for outer class.
If a class is having lots of code then we can reduce its complexity by defining inner class.
So inner class is useful only inside.

?What is flush and where do we use it?
The output is sent to the screen using cout,it does not go immediately to the terminal.
First it will be sent to output buffer and then displayed on the screen.
Sometimes in very large programs, it remains in the buffer and we dont get the output in proper order.
Flush is used to confirm that the buffered is cleared and the output is sent to the screen.
*/

