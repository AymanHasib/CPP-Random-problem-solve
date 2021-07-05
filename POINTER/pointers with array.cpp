#include <iostream>
using namespace std;
int main ()
{
    int arr [5],x=2;
   /* int *pointer0 = &arr [0];
    int *pointer1 = &arr [1];
    int *pointer2 = &arr [2];
    int *pointer3 = &arr [3];
    int *pointer4 = &arr [4];
    cout << "value 0: "<<pointer0 <<endl;
    cout << "value 1: "<<pointer1 <<endl;
    cout << "value 2: "<<pointer2 <<endl;
    cout << "value 3: "<<pointer3 <<endl;
    cout << "value 4: "<<pointer4 <<endl;
    pointer0 =pointer0+2;
    cout << "value 0: "<<pointer0 <<endl;*/
    int *xptr;
    xptr=&x;
    cout << *xptr;

    return 0;
}

