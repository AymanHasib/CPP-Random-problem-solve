#include <iostream>

using namespace std;

int main()
{
    int n;
    bool flag=true; // Assuming, prime number
    cout <<" enter your number"<<endl;
    cin >>n;

    for (int i=2;i<n;i++){
        if (n%i==0)
           flag=false; // So, its not prime
    }
    if (flag)   // flag aways true if we dont ensure it.
        cout <<"\nits a prime number";
    else
        cout <<"\nnot a prime number";



    return 0;
}
