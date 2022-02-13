#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (n); i++)
 int main()
{
int a[4][5]=
{
    1,2,3,4,5,
    6,7,8,9,10,
    11,12,13,14,15,
    16,17,18,19,20

};
int b[5][4];
rep(i,4)
{
    rep(j,5)
    {
        b[j][i]=a[i][j];



    }
}
rep(i,5)
{
    rep(j,4)
    {
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}
 return 0;
}