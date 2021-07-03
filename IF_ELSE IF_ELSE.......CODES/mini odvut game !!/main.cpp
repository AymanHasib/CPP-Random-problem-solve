#include <iostream>

using namespace std;

int main()
{
    int a;
    cout <<"enter a number which is among 10-20 :)"<<endl;
    cin >> a;
    if(a<10){
        cout <<"you guess the number which is less then 10";
    }
    else if (a>=10 && a<=20){
        cout <<"you guess the right number";
    }

    else {
        cout <<"you guess the number which is greater then 20";
    }
    return 0;
}
