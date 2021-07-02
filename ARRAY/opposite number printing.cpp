#include <iostream>
using namespace std;
main()
{
    int arr [100] ;
    int length;
    cout <<"enter your range of values"<<endl;
    cin >>length;

    for(int i=0; i<length; i++)
    {
        cin >> arr[i];
    }
    for (int i =(length-1); i>=0; i--)
    {
        cout << arr[i]<<endl;
    }



    return 0;
}
