# include<iostream>
using namespace std;
    
/*program for using auto function

*/
float fun()
{
	return 2.34f;
}
int main()
{
	double d=12.3f;
	int i=9;
	auto x=2*d+i;
	cout<<x;

    int c=10;
    decltype(c) a=20; // will assign a data type of c
}

