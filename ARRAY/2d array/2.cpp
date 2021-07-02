#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,row,column;
    cout << "Enter the row : ";
    cin >> row;
    cout << "Enter the column : ";
    cin >> column;
    if (row==column)
    {
        int arr [row][column];
    }
    /*else {
        cout << "Enter the same row and column number "<<endl;
    }*/
    int arr [row][column];
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<column; j++)
        {
            cin >> arr [i][j];
        }

    }
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<column; j++)
        {
            cout << arr [i][j] ;
            cout << " ";
        }
        cout << "\n";

    }


    return 0;
}

