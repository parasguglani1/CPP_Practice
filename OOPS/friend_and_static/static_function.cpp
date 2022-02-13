# include<iostream>
using namespace std;
    
/*program for static function of a class
Static members functions are functions of a class, they can be called using class name, without
creating object of a class.
• They can access only static data members of a class, they cannot access non-static members
of a class.
*/
class test
{
public:
     int a;
     static int count;
     test()
     {
	   a=10;
           count++;
     }
     static int getcount()
     {
	   return count;
     }
};
int test::count=0;
int main()
{
	test t1,t2;
	cout<<test::getcount()<<endl;
	cout<<t1.getcount()<<endl;
}