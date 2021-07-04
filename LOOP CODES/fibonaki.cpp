#include <iostream>

using namespace std;

main(){

   int first = 0;
   int second = 1;
   int number;
   int third;

   cout <<"enter a number"<<endl;
   cin >>number;
   cout <<" "<<first;
   cout <<" "<<second;
   for (int i = 0; i<=number-2; i++){
    third = first + second;
    first =second;
    second =third;
    cout <<" "<<third;
    }


return 0;
}
