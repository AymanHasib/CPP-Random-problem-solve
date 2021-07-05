#include <iostream>

using namespace std;

int main ()
{
    int adib=7;
    int arr[5]={1,2,3,4,5};
    cout << &adib <<endl;
    int *adibpointer;
    adibpointer=&adib;
    cout << adibpointer <<endl;
    cout << *adibpointer <<endl;

    adibpointer=arr;
   // cout << adibpointer <<endl;
    cout << *++adibpointer <<endl;
    return 0;
}
