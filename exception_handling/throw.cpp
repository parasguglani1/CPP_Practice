# include<iostream>
using namespace std;
    
/*program for all about throw

*/
class myexception: exception // class myexception inherits from exception
{
    public:
    int a,b;
    myexception(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
};
// {
// };
int division(int a,int b)
{
	if(b==0)
		throw myexception(a,b); // we can throw any data type as exception or object of any class
	return a/b;
}
int main()
{
	int x=10,y=2,z;
	try
	{
		z=division(x,y);
		cout<<z<<endl;
	}
	catch(myexception e)
	{
		cout<<"division by zero"<<endl;
	}
	cout<<"bye"<<endl;
}