#include <iostream>

using namespace std;

int main()
{
    int value;
    int total= 1;

    cout <<"enter your value "<<endl;
    cin >> value;

    for (int i = 3; i<=2*value; i=i+3){
        total = total * i;
    }
    cout <<"your total value is :"<< total <<endl;




    return 0;
}
