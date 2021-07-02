#include <iostream>
#include <string.h>
using namespace std;

main()
{

    int value[10],multiplication;
    //cin >> value[0];


    for (int i =0; i<10; i++)
    {

        cin >> value[i];
        multiplication=(value[0]*value[1]*value[2]*value[3]*value[4]*value[5]*value[6]*value[7]*value[8]*value[9]);
    }
    cout << multiplication<<endl;

    if (multiplication%2==0)
    {
        cout <<"the ans is even"<<endl;
    }
    else
    {
        cout <<"the ans is odd"<<endl;
    }

    return 0;
}
