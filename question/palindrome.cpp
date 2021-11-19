#include <bits/stdc++.h>
using namespace std;
int main(){

string str="paras";

int n=str.length();
// for (int i = 0,j =n-1; i < n; i++,j--)
// {
//     if(str[i]!=str[j])
//     {
//         cout<<"not palindrome";
//         break;
//     }
//     else if(i==j)
//     {
//         cout<<"palindrome";
//     }
// }

string rev="";
for (int i = n-1; i >=0; i--)
{
    rev+=str[i];
}
// cout<<rev;
if(str==rev)
{
    cout<<"palindrome";
}
else
{
    cout<<"not palindrome";
}


return 0;
}