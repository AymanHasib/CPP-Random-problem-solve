#include <iostream>

using namespace std;

int main()
{
 int n;
 int sum = 0;

    cout <<"enter your number"<<endl;
    cin >>n;
    for (int i = 5; i <= 5*n; i=i+5){
        sum = sum +i;
    }
    cout <<"the sum of those numbers are "<<sum<<endl;

    return 0;
}
