#include <bits/stdc++.h>
using namespace std;

class girl
{
private:
string name;
 int height;
 int weight;
 int complexion;
 int cuteness_level;
 public:
girl(string name, int height,int weight, int complexion,int cuteness_level);

 int getcuteness_level(){return cuteness_level;}
};


int main()
{
    girl Harshita("harshita",6,40,100,100);

    cout<<Harshita.getcuteness_level();


return 0;
}

girl::girl(string n, int h,int w, int c,int h_l)
{
   name=n;
   h=height;
   w=weight;
   c=complexion;
   h_l=cuteness_level;
 
}