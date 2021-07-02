#include <iostream>
using namespace std;
main(){
    int arr [100];
    int length;
    int maximum = 0; // this variable holds the index that contains the maximum value
    int minimum = 0;
    //Take input the number of values user wants to insert
    cout << "Enter the number of values you want to insert:";
    cin >> length;
    //Taking input from user
    for(int i=0;i<length;i++){
        cin >> arr[i];
    }
    //Finding the maximum value

    for (int i=1; i<length; i++){
        if (arr[i]>arr[maximum]){
           maximum=i;
        }
         else if (arr[i]<arr[minimum]){
           minimum=i;
        }
    }
    cout <<"Maximum value:"<< arr[maximum]<<endl;
     cout <<"Minimum value:"<< arr[minimum]<<endl;
return 0;
}
