#include<iostream>
using namespace std;


// template<class T>
// T Max(T a, T b)
// {
//     if(a<b)
//     return b;
//     else return a;
// }
// Max() function template for 2 numbers

//here c is a default argument to overload function
//must give the default argument from right
int sum(int a, int b, int c=0)
{
    return a+b+c;
}

int Max(int a, int b, int c=0)

{
   if (a>b)
   {
       if (a>c)
       return a;
       else return c;
   }
   else
   {
       if (b>c)
       return b;
       else return c;
   }
}

int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5,17.3,20);

    return 0;
}
