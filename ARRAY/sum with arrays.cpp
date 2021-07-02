#include <iostream>

using namespace std;

main(){
    int arr [7] = {3,5,-8,-12,23,42,-65};
    int sum_even=0;
    int sum_odd=0;
    //int sum1,sum2;

    for (int i = 0; i<7 ;i++){
        if (i%2==0){
            sum_even = sum_even+arr [i];
        }

        else if(i%2!=0){
            sum_odd = sum_odd+arr [i];
        }

    }
       cout <<sum_even<<endl;
       cout <<sum_odd<<endl;


return 0;
}
