#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;
public:
    Complex(int real, int imaginary);
    ~Complex();
    void plus(Complex c2)
    {
        real=real+c2.real;
        imaginary=imaginary+c2.imaginary;
    }
    
    void multiply(Complex c2)
    {
        int temp= real;
        real = real * c2.real-(imaginary*c2.imaginary);
        imaginary = (imaginary *(c2.real))+ (c2.imaginary)*(temp);
    }
    void print()
    {
        cout<<real<<" +"<<" i"<<imaginary;
    }
};

Complex::Complex(int real, int imaginary)
{
    //this stores address of current object
    this->real=real;
    this->imaginary=imaginary;
}


Complex::~Complex()
{
}
