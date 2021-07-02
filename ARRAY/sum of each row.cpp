#include <iostream>
using namespace std;
main()
{
    int a [4] [2],sum = 0;

    cout << "Enter your 8 values "<<endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i] [j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << " " <<a[i] [j];
        }
        cout << "\n";
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = sum + a [i] [j];
        }

    }
    cout << "sum = "<<sum<<endl;

    return 0;

}



