#include <bits/stdc++.h>
using namespace std;
int main(){
//for char enter

int n=10;
char nalphabet=65+n;

for(int i=1;i<=nalphabet;++i){
    for(int j=65;j<=65+i;++j)
    {
        if(j<i){
        cout<<(char)(j)<<" ";
        }

        // else{
        //     cout<<" ";
        // }
        
    }
    cout<<endl;
}

return 0;
}