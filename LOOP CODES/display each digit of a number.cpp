#include <iostream>
using namespace std;
int main(){
   int value,sum=0;
    cin >> value;
    int temp=value; //123
    while(temp != 0){
        //sum = sum + (temp%10);
        cout << (temp%10)<< " ";

        sum = sum + (temp%10);
       cout << sum << " ";
        temp=temp/10;
        //sum = sum + (temp%10);
    }//cout << sum << " ";
return -2;
}
