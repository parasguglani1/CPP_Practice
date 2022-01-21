# include<iostream>
using namespace std;
    
/*program for lambda expression
//used in functional programming in AI
*/
template<typename T>
void fun(T p)
{
    p();
}
int main()
{
    
    [](){cout<<"Hello World"<<endl;}; //lambda expression with no arguments


	[](int x,int y)
	{
	 	cout<<"sum is "<<x+y<<endl;
	}
	(10,30);
    int b= [](int x,int y)->int {return x+y;}(10,30); //lambda expression with return type and arguments
    int a = [](int x,int y) {return x+y;}(10,30); //lambda expression with return type and arguments
    // return type is optional
    int d =25;
    int m =25;
    [d]() {cout<<"d is "<<d<<endl;}; //lambda expression with one argument
    auto f = [a](){cout<<a<<endl;}; //lambda expression with return type and arguments
    auto g = [&m](){cout<<m<<endl;}; //lambda expression with return type and arguments

    f();
    a++;
    f();
g();
m++;
g();


fun(f);
   return 0;
}