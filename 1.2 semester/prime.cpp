#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int n,a;
    cin >>n;
    a=sqrt(n);
    for (int i=2; i<=a; i++){
        if (a%i==0){
            cout<< "prime"<<endl;
        }
        else if (a%i!=0){
            cout<< "not prime"<<endl;
        }
    }


    return main ();
}
