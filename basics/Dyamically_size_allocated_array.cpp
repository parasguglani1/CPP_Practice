
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int A[n];
    int B[n];
    // cout<<sizeof(A);
    // cout<<"enter size";
    cin >> n;
    cout << &A[0] << endl;
    cout << &B[0] << endl;
// cout<<10e5;
// cout<<sizeof(A);
#if 0
for (int i = 0; i < 300000; i++)
{
    A[i]=i;
// cout<<"hello ";
    /* code */
}
// cout<<"hello";
  

// cout<<"hello";


for (int j = 0; j < 300000; j++)
{
    B[j]=-j;
}
// cout<<"hello";
#endif
    // cout<<"hello";
    A[0] = 321;
    B[0x20000 / 4] = 123;
    // A[0] = 123;
    // cout<<"hello";
    cout << A[0] << endl;
    // cout<< A[1]<<endl;
    // cout<< B[0]<<endl;
    // cout<< B[1]<<endl;

    // cout<<"hello";
#if 0
for (int i = 0; i < 300000; i++)
{
    //   cout<<"hello";
    cout<<A[i]+B[i];
  
    /* code */
}

#endif
    return 0;
}

// B overwrites A