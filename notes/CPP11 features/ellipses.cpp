# include<iostream>
# include<cstdarg>
using namespace std;
    
/*program for ellipsis
• Used for defining variable argument functions
• … is used as symbol of ellipsis
• Printf and scanf of C language are example of ellipsis

*/
int sum(int n,...)
{
	va_list list;
	va_start(list,n);
	int x;
	int s=0;
	for(int i=0;i<n;i++)
	{
		x=va_arg(list,int);
		s+=x;
	}
	return s;
}
int main()
{
	cout<<sum(3,10,20,30)<<endl;
	cout<<sum(5,1,2,3,4,5)<<endl;
}