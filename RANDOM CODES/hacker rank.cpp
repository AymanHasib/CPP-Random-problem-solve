#include <iostream>
using namespace std;
main()
{
   int n1,n2,diff;
   cin >>n1;
   cin >> n2;
   //diff = n1-n2;
   for (n1;n1<=n2;n1++){
        if (n1 == 1){
        cout << "one\n";
        }
        else if (n1 == 2){
        cout << "two\n";
        }
        else if (n1 == 3){
        cout << "three\n";
        }
        else if (n1 == 4){
        cout << "four\n";
        }
        else if (n1 == 5){
        cout << "five\n";
        }
        else if (n1 == 6){
        cout << "six\n";
        }
        else if (n1 == 7){
        cout << "seven\n";
        }
        else if (n1 == 8){
        cout << "eight\n";
        }
        else if (n1 == 9){
        cout << "nine\n";
        }


   }
   for (diff;diff<=9;diff++){
        else if (diff >9 && diff%2==0){
        cout << "even";
        }
        else if (diff >9 && diff%2!=0){
            cout << "odd\n";
        }
   }

    return 0;

}

