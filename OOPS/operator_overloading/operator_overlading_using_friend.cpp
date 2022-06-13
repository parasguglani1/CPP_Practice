// Operator Overloading using Friend Functions
#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << "+i" << img << endl;
    }
    friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

/*
? c3=c1+c2. Assignment operators should be overloaded?
No need. C++ provides assignment on object.
Assignment operator must be overloaded if object are having memory in heap

?:: for friend function?
We don’t use scope resolution for friend functions. They are global functions

*Friend function
if are using two or more objects in the parameter. Then we have to make use of friend.
when both are of same class then we have 2 options.
1. make operator as a member of class
2. make it as friend
*when 2 arguments are from different classes then there is only 1 option that is friend function


*”this” keyword.
When a operator function for + is defined like Complex operator+(Complex c2)
Then it is called like
c3=c1+c2;
Here function is called upon c1 and c2 is passed as parameter.
Members of c2 can be accessed using c2.real etc.
*Members of c1 can be accessed using this->real etc.
 */

int main()

{
    Complex c1(5, 3), c2(10, 5), c3;

    c3 = c1 + c2;

    c3.display();
}
