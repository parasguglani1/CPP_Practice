#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    int x;
     int y;
    A(){
        x=10;
        y=20;
    }
    void display() const {
        // const function
        // x++;
        cout<<x<<" "<<y<<endl;
    }
};

void fun(const int &a, int &b) // call by reference function are inline function but it won't be able to modify value of a and b

{
cout<<"a="<<a<<" b="<<b<<endl;
// ++a;
 ++b;
    // a.x=100;
    // a.y=200;
    // a.display();
}



int main(){
    const int x = 10;
    // int const x = 10;
// const
 int y=12;
    const int *ptr =&y; //constant pointer can be assiged to other variable

    // int const  *ptr =&y; //constant pointer it is same as int const *ptr =&y;
    int * const ptr1 =&y; //constant pointer can change the value of y
    // ptr1=&x;
     ++*ptr1;

    const int * const ptr1 =&y; //constant pointer can neither change nor reassign
       
        cout<<*ptr<<endl;           
   
   
    // ++*ptr;
    cout<<*ptr<<endl;

fun(x,y);





return 0;
}