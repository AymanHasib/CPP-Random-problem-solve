#include<iostream>
using namespace std;
int main()
{
    int number [500],length,value,box=0,box1=100;
    float avrg,sum=0;
    cout <<"enter students number : ";
    cin >>length;

    for (int i = 0; i<length; i++)
    {
        cin >>number [i];
    }

    for (int i = 0; i<length; i++)
    {
        cout << "enter 1 for max number"<<endl;
        cout << "enter 2 for min number"<<endl;
        cout << "enter 3 for avrg"<<endl;
        cin >>value;


        if (value==1)
        {
            if (number [i]>box)
            {
                box = number [i];
            }
        }
        if (value == 2)
        {
            if (number [i]<box1)
            {
                box1 = number [i];
            }
        }
        if (value == 3)
        {
            sum= (sum + number [i]);

        }
    }
    if (value == 3)
    {
        box = (sum/length);
    }

    if (value == 1 || value == 3)
    {
        cout <<box<<endl;

    }
    if (value == 2)
    {
        cout <<box1<<endl;

    }

    return 0;
}

