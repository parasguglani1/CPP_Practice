#include <iostream>
using namespace std;

int main()
{
   int space, row=10,max=1;
   
int count=1;
    for(int i = 1, k = 0; i <= row; ++i, k = 0)
    {        
    for(space = 1; space <= row-i; ++space)
    {
        cout <<"  ";
    }
          count=i,max=1;

        while(k != 2*i-1)

        {
            // cout << k;
      

            cout<<count<< " ";
            ++k;
            if (count<2*i-1 && max)
        {
            ++count;
            
        }   
        else if (count>=2*i-1 || max==0)
        {
            count--;
            max=0;

        }
        } 

    cout << endl;
}
    return 0;
}