#include <iostream>
using namespace std;

int division(int a, int b)
// int division(int a,int b) throw()

// throw() if used in method signature means no exception will be thrown by this function
{
    if (b == 0)
        throw 1;
    return a / b;
}

int main()
{
    int x = 10, y = 0, z;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "Division by zero " << e << endl;
    }
    cout << "Bye" << endl;
}