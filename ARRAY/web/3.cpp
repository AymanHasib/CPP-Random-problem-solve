#include<iostream>
using namespace std;
int main()
{   int sum=0,choice,value;

    cout <<"enter your choice"<<endl;
    cin >>choice;
    int number[200];
    for (int i = 0; i<choice; i++){
        cin >> number [i];
        sum = number[i]+number [i];
        value = number [i]+sum;

    }

    cout <<value<<endl;



    return 0;
}

