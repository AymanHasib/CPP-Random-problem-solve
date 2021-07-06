// 1/2+1/4+1/6+.....
#include <iostream>

using namespace std;

int main()
{

    float value;
    float sum = 0;

    cout <<"enter your value "<<endl;
    cin >>value;

    for (float i = 2; i<=2*value; i=i+2){
        sum = sum + 1/i;
    }
    cout <<"the sum of those numbers are : "<< sum <<endl;


    return 0;
}
