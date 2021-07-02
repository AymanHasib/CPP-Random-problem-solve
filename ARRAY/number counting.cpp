#include <iostream>

using namespace std;

main(){

   int arr [13]={1,2,4,3,2,3,4,4,5,5,5,5,5};
   int counting;
   int number=0;

   cout <<"enter a number which you want to know the range"<<endl;
        cin >>counting;

    for (int i=0;i<13;i++){
        if (counting==arr[i])
            number++;

        }
   cout <<"the number found "<<number<<endl;


return 0;
}
