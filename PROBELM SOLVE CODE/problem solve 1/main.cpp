#include <iostream>

using namespace std;

int main()
{
    int num,sum=0;
    cout << "enter a number: "<<endl;
    cin >> num;
    cout << "Here are the numbers evenly divisible by " << num << ":" << endl;
    for(int i=-30;i<=50;i++){
        if (i % num ==0){
            cout << i <<" ";
            sum = sum + i;
            //cout <<"\nSum = " << sum;
        }
    }
    cout <<"\nSum is: " << sum;

//-30 -20 -10 0 10 20 30 40 50
    return 0;
}
