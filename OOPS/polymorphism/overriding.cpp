
#include <iostream>
using namespace std;

/* Function Overriding
• Redefining a function of base class in derived class
• Function overriding is used for achieving runtime polymorphism
• Prototype of a overrides function must be exactly same as base class function
*/
class Base
{
public:
    void fun()
    {
        cout << "fun of Base" << endl;
    }
};
class Derived : public Base
{
public:
    void fun()
    {
        cout << "fun of Derived" << endl; // overriding of fun() of Base class
    }
};
int main()
{
    Derived d;
    d.fun();
}