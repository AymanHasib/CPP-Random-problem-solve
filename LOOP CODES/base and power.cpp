#include <iostream>
#include <math.h>
using namespace std;

int main()
{   int base;
    int power;
    int value=1;

    cout <<"enter a number which is the base :";
    cin >>base;
    cout <<"enter a number which is the power :";
    cin >>power;

    for (int i =1;i<=power;i++){
        value=value*base;
        //cout <<"the value is : "<<value;
    }
    cout <<"the value is : "<<value;


    return 0;
}
