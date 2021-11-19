#include <bits/stdc++.h>
using namespace std;
int main(){
int x=10;
int &y =x;
//means y is a reference to x
// y is also 10
//y is just an alias of x
x++;
y++;
cout<<x<<endl;
cout<<y<<endl;
return 0;
}