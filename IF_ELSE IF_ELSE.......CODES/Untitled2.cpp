#include <iostream>

using namespace std;

int main()
{
    int n,flag =0; //prime
    cout <<" enter your number"<<endl;
    cin >>n;

    for (int i=2;i<=n-1;i++){
        if (n%i==0)
           flag=1;//non-prime


    }
    if (flag ==1)
         cout <<"\nnot a prime number";

        else
            cout <<"\nits a prime number";


    return 0;
}
