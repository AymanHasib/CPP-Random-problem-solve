#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
    int x,y,sum;
    cout << "Enter 2 numbers"<<endl;
    cin >> x;
    cin >> y;
    sum = x+y;

    printf ("SUM: %d\n",sum);
    for (int i=0;i<3;i++){
        cout << "SUM: " <<sum<< "\n" ;
    }
    return 0;
}
