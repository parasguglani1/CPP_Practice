#include <bits/stdc++.h>
using namespace std;
int main(){
string str="parasguglani1@gmail.com";

int index=str.find('@');

str=str.substr(0,index);
cout<<str;



return 0;
}