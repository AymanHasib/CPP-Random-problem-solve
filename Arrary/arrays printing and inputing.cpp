
#include <iostream>
using namespace std;
int main()
{

    int number[7]= {2,4,5,15,19,21,31};



    for (int i=0; i < 7; i++)
    {

        cout << number[i] << endl;
    }
    for (int i=0 ; i < 7; i++)
    {
        cout <<"enter a number"<< endl;
        cin >>number [i];

    }

    for (int i = 0; i < 7; i++)
    {

        cout << number[i] << endl;

    }


        return 0;
    }
