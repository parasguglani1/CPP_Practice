# include<iostream>
using namespace std;
// *runtime errors faced by the user are handled by the exception handling mechanism
//* runtime errors are caused by
//* 1. Lack of reources like memory, disk space,required files,lack of printer,lack of internet etc
//* 2. Incorrect input from the user

//* examples of runtime errors are:
//* 1. memory allocation failure
//* 2. division by zero
//* 3. invalid pointer dereference
//* 4. invalid array index

//due to runtime errors the program is not able to execute the code and the program is terminated abruptly.
//* exceptions are cases in which the program is terminated abruptly.

//* objective of exception handling is to inform the user about the error and to resolve it to continue the program execution.

    
/* 
• program for exception handling construct

* A try block can have Multiple catch blocks
• Catch-All can catch all exception
• Catch-All must be a last block
• If classes in inheritance are used in catch block then child class should come first
*/
 
int main()
{
	int x=10,y=2,z;
	try
	{
		if(y==0)
			throw 1;
		z=x/y;
		cout<<z<<endl;
	}
	catch(int e)
	{
		cout<<"division by zero"<<e<<endl;
	}
	cout<<"bye"<<endl;
}
