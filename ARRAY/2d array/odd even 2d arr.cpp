#include <iostream>
using namespace std;
main()
{
   int row,column;
   cout << "Enter the row number : ";
   cin >>row;
   cout << "Enter the column number : ";
   cin >>column;
   int a [row] [column];

   }

    cout << "\n";

    if (row = column){
       for (int i=0;i<row;i++){
    for (int j=0;j<column;j++){
        cin >> a [i] [j];
    }
        for (int i=0;i<row;i++){
    for (int j=0;j<column;j++){
        cout<< " " <<a [i] [j];

    }

    }
       }
    else {
        cout << "Enter the same row and column number "<<endl;
    }



    return 0;

}

