/* PreProcessor Directives
• They are instructions to compiler
• They are processed before compilation
• They are used for defining symbolic constant
• They are used for defining functions
• They also support conditional definition */

#include <iostream>
using namespace std;
#define max(x,y) (x>y?x:y)
#define msg(x) #x

#ifdef PI
#define pi 3.14
#endif

#ifndef PI
 #define PI 3.1425


#endif



#define gfg 7
   
#if gfg > 200
   #undef gfg
   #define gfg 200
#elif gfg < 50
   #undef gfg
   #define gfg 50
#else
   #undef gfg
   #define gfg 100
#endif


int main()
{
 cout<<PI;
 cout<<max(10,12)<<endl;
 cout<<msg(hello)<<endl;
}   