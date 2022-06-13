class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funBase()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};
class Derived : public Base
{
public:
    void funDerived()
    {
        //  a=10; //private not accessible
        b = 5; // protected accessible in derived class
        c = 15;
    }
};
int main()

{
    Base b;
    //  b.a=10; //private not accessible
    //  b.b=5; //protected not accessible on object
    b.c = 20;
}