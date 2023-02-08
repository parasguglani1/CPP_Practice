// Introduction:
// Variadic Templates are a powerful feature in C++ that allows you to write functions or classes that take a variable number of arguments. These templates allow you to create generic functions that can handle multiple data types, making it easier to write code that is both flexible and reusable.

// Syntax:
// The syntax for declaring a variadic template is straightforward. You start by declaring a template with a parameter pack, which is denoted by an ellipsis (...). For example:

// template <typename... T>
// void print(T... args)
// {
//     // implementation
// }
// In this example, T... is the parameter pack, and args is a pack expansion, which represents the variable number of arguments.

//                                                                            Use Cases : Variadic Templates are commonly used in a variety of use cases,
//     including :

// Printing a variable number of arguments :
#include <bits/stdc++.h>
using namespace std;

template <typename... T>
void print(T... c)
{
    (cout << ... << c) << endl;
}

// Calculating the sum of a variable number of arguments :
template <typename T>
T sum(T t)
{
    return t;
}

template <typename T, typename... a>
T sum(T t, a... c)
{
    return t + sum(c...);
}

int main()
{
    print(1, 2, 3, 4, 5);

    cout << sum(1, 2, 3, 4, 5) << endl;
    return 0;
}
