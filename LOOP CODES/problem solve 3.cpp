#include <iostream>

using namespace std;

int main()
{
    int value,sum=0;
    cin >>value;
    for (int i =1; i<=value; i++){
        if(i%2==0){
            sum = sum+1;
        }
        else{
            sum = sum - 1;
        }
    }
    cout << sum;
    return 0;
}
