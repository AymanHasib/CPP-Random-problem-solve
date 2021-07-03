#include <iostream>

using namespace std;

int main()
{
    int value;
    int number;
    int amount;

    cout <<"enter your three number !!"<<endl;
    cin >>value;
    cin >>number;
    cin >>amount;

    if (value > number && value > amount) {
        cout <<"your first number is the largest one !!"<<endl;
    }
    else if (number > value && number > amount){
        cout <<"your second number is the largest one !!"<<endl;
    }
    else {
        cout <<"your third number is the largest one !!"<<endl;
    }
    return 0;
}
