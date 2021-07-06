#include <iostream>
using namespace std;
main()
{
    int range;
    cout << "Enter the range of your number"<<endl;
    cin >>range;
    int number [range];
    cout << "Enter your numbers "<<endl;
    for (int i = 0; i<range; i++)
    {
        cin >>number [i];
        if (number [i]%2==0)
        {
            cout <<"Even number : "<<number [i]<<endl;
        }
        else if (number [i]%2!=0)
        {
            cout <<"Odd number : "<<number [i]<<endl;
        }
    }
    return 0;

}



