#include <iostream>
#include <string.h>
using namespace std;

main()
{

   int range,number1;
   cout << "Enter how many numbers you want to input : ";
   cin >>range;
   int number [range];
   cout << "Enter the numbers"<<endl;
   for (int i = 0; i<range; i++){
    cin >>number [i];
   }

   cout << "Enter the spacific number : ";
   cin >>number1;
   int prev=number1-10;
   int next=number1+10;
   for (int i =0; i<range; i++){
    if (number [i]>=prev && number [i]<=next){
        cout <<number [i]<<endl;
    }
   }


    return 0;

}



