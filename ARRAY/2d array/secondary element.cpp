#include <iostream>
using namespace std;
main()
{
    int row,column;
    cout<< "Enter the row number : ";
    cin >>row;
    cout << "Enter the column number : ";
    cin >>column;

    int a [row] [column],k=2,value=0;

    cout << "Enter your values "<<endl;
    if (row==column)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cin >> a[i] [j];
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << " " <<a[i] [j];
            }
            cout << "\n";
        }
        for (int i = 0; i < 3; i++)
        {

            value = a[i][k];
            k--;
            cout << value<<endl;
        }
    }

    else
    {
        cout << "Enter the same ROW and COLUMN number"<<endl;
    }

    return 0;

}

