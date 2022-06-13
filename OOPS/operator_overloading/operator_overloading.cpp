#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0) // default cons
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    //* could be written as
    //  Complex add(Complex c){
    //     Complex temp;
    //     temp.real=real+c.real;
    //     temp.img=img+c.img;
    //     return temp;
    // }
    //* :: and ternary opearator cannot be overloaded
};

/* Operators can be overloaded on our classes
• We can define operator for our own classes
• Operators can be overloaded using member functions or friend functions
• Global functions can also access private and protected members of an object if they are
declared as friend inside a class */

int main()
{

    Complex c1(2, 3), c2(3, 4), c3;

    //* if not operator overloading we would have to write
    //* c3=c2.add(c1);
    c3 = c1 + c2;
    c3.display();
    return 0;
}