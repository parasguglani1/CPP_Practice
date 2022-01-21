# include<iostream>
using namespace std;
    
/*program for static variables

*/
int global_variable=10;
int b=50;
//memory is allocated for global variable only once
//can be accessed by all functions
void fun()
{
    int b=20;
    //memory is deleted after the function is executed
    //can be accessed by only this function
	static int s=10;
    //memory is allocated for s only once
    //can be accessed by only this function
	s++;
    
    cout<<::b<<endl;
//to accesss global variable of same name use scope resolution operator

	cout<<s<<endl;
}
//static variables are declared in the global scope and are initialized only once in the program but can be used only in the function where they are declared.
int main()
{
	fun();
	fun();
}