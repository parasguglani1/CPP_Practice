#include <iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10};   

for(int &x:A)   

cout<<++x<<endl;
cout<<endl;
cout<<A[0];  
    
    return 0;
}