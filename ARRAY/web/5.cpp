#include<iostream>
using namespace std;
int main()
{

   int number [500],choice,box = 0,count=0;
   cout << "enter your numbers"<<endl;
   cin >>choice;

   for (int i = 0; i<choice; i++){
    cin >> number [i];
    if (number [i] > box){
        if (number [i] == number [i]){
            count = count + 1;
        }
    }
   }
   cout << count <<endl;



    return 0;
}

