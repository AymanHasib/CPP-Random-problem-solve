#include <iostream>

using namespace std;

int main()
{
    int value,total;
    cout <<"enter your value";
    cin >>value;

    for (int i=1;i<=10;i++){
      total=value*i;
      cout <<value<<"*"<<i<<"="<<total<<endl;

    }



    return 0;
}

