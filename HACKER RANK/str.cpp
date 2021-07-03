#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
   int a,b,c,d;
   cin >>a;
   cin >>b;
   c=a+b;
   if (a>b){
    d=a-b;
   }
   else if (a<b){
    d=b-a;
   }
    cout << c <<endl;
    cout << d <<endl;

    return 0;
}

