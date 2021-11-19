#include <bits/stdc++.h>
using namespace std;

//don't have cin and cout in functions

int sum(int x, int y) //this part is call funtion signature
{
    return x+y;
}
// sum() function here to add 2 integer

float sum(float x,float y)
{
    return x+y;
}
// sum() function here to add 2 floats

int sum(int x, int y, int z)
{
    return x+y+z;
}// sum() function here to add 3 integer

//it is a name conflict if function name and arguments are same but return type is different 







int main()
{
    cout<<sum(10,5);
    cout<<sum(12.9f,8.3f);
    cout<<sum(10,20,30);


return 0;

}