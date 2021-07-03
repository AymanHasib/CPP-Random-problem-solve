#include <iostream>

using namespace std;

int main()
{
    int value;
    cout << "enter your specific year !!"<<endl;
    cin >> value;
    if ((value%4==0 || value%400==0) && value%100!=0){
        cout <<"your entered year is a leap year !!"<<endl;
    }
    else {
        cout << "sorry your entered year is not a leap year !! " <<endl;
    }


    return 0;
}
