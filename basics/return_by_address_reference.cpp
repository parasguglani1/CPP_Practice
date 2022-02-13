# include<iostream>
using namespace std;
    
/*program for return by address
• A function can return address of memory
• It should not return address of local variables, which will be disposed after function ends
• It can return address of memory allocated in heap
*/
// int* fun()
// {
// 	int *p=new int[5];
// 	for(int i=0;i<5;i++)
// 	{
// 		p[i]=5*i;
// 	}
// 	cout<<p<<endl;
// 	return p;
// }
// int main()
// {
// 	int *q=fun();
// 	for(int i=0;i<5;i++)
// 		cout<<q[i]<<endl;
// }


    
/*program for return by reference
A function cal return reference
• It should not return reference of its local variables
• It can return formal parameters if they are reference

*/
int& fun(int &x)
{
	return x;
}
int main()
{
	int a=10;
	fun(a)=25;
	cout<<a<<endl;
}