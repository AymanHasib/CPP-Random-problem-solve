#include <iostream>
using namespace std;
int main(){
    int value;
    cin >> value;
    int temp=value;
    int counts=0;
    while(temp != 0){
        //counts++;
        temp=temp/10;
        counts++;
    }
    cout << value << " has " << counts << " digits";
return -2;
}
