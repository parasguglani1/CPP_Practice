#include <bits/stdc++.h>
using namespace std;

// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// //this will not work because it pass by value and only copies x and y in a and b


// void swap(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// //this will work because it pass by reference and it will change the value of x and y
// //should only use if the code is small and doesn't have loops
// //this is a inline function
// // machine code of this function is copied in the main function and no extra space is used for the function call and return value

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//this will work because it pass by address and it will change the value of x and y


int main(){

int x = 10, y = 20;
cout << "Before swap: x = " << x << " y = " << y << endl;
// swap(x, y);// for pass by reference
swap(&x, &y);// for pass by address
cout << "After swap: x = " << x << " y = " << y << endl;



return 0;
}