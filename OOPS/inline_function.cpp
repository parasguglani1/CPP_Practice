// Good practise to write functions outside
// the class using?
// • Class definition should be separation and function body should be
// separate. It will be easy to read and share.
// • Class will contain definitions of functions, that can be shared as
// header file and implementation of functions outside class using
// scope resolution can be kept in library file.
// • If we are sharing code with others then they can’t see the code in
// functions
// • If they are implemented inside then they will become inline by
// default.
// One more thing, Functions should not be inline. But when you
// were writing a function for single line also then it’s better to make
// inline to avoid function call.

// • simple single line functions can be made as inline.
// • inline functions will save time. call will not be made and activation
// record will not be created.
// • if we define a function inside a class and if we call it multiple times
// in our main function. Then the code will be copied at all places
// wherever it is called in the code section of the memory.
// • inline functions will be copied in place of function call. they will not
// work like normal functions. they dont require function call, this will
// save little time
// • we should write property function get/set as inline. functions with
// loops should be avoided.
// • copying of code is decided by compiler. writing inline is a hint to
// compiler

class Rectangle
{
private:
    int length;
    int breadth;
    // best practice to declare private variables to prevent data mishandling by the user and functions in public
    // we write perfect code in classes
public:
    Rectangle();                         // default constructor
    Rectangle(int l, int b);             // parameterized constructor
    Rectangle(Rectangle &r);             // copy constructor
    int getLength() { return length; }   // getter or accessor //inline function
    int getBreadth() { return breadth; } // getter or accessor //inline function
    void setLength(int l);               // setter or mutator
    void setBreadth(int b);              // setter or mutator
    int area();                          // facilitator  function
    int perimeter();                     // function
    bool isSquare();                     // function
    ~Rectangle();                        // destructor
};

inline void Rectangle::setLength(int l)
{
    length = l;
}
inline void Rectangle::setBreadth(int b)
{
    breadth = b;
}
inline int Rectangle::area()
{
    return length * breadth;
}
inline int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
inline bool Rectangle::isSquare()
{
    return length == breadth;
}
