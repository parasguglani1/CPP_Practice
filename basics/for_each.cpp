#include <bits/stdc++.h>
using namespace std;
int main(){
float A[5]={1.1,2.2,3.3,4.4};
for(auto i:A) // if data type is not known then use auto
for(float j:A)

//works on collection of elements, vector,array,map but not pointer
cout<<i<<endl;

return 0;
}