#include <bits/stdc++.h>
using namespace std;
int main(){
int n=10;
for(int i=1;i<=n;++i){
    for(int j=1;j<=i;++j)
    {
        if(j<i){
        cout<<j;
        }

        // else{
        //     cout<<" ";
        // }
        
    }
    cout<<endl;
}

return 0;
}