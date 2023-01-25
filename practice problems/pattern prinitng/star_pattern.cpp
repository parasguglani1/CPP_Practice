#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
            max = a[i];
    }
    int b[max][n];
    memset(b, 0, sizeof(b));

    for (int col = 0; col < n; col++)
    {
        for (int row = max - 1; max - row - 1 < a[col]; row--)
        {
            b[row][col] = 1;
        }
    }

    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(b[i][j]==1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            // cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
