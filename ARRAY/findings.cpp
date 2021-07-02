#include <iostream>
#include <string.h>
using namespace std;

main()
{
    int length,choice,max,min;


    cout <<"enter the length of player "<<endl;
    cin >>length;
    string name [length],nationality[length],club[length];
    int age [length],point[length],jersey[length];

    for (int i =0; i<length; i++)
    {
        cout <<"the information of player "<<i+1<<endl;
        cout <<"Name : ";
        cin >>name [i];
        cout <<"Nationality : ";
        cin >>nationality [i];
        cout <<"Club : ";
        cin >>club [i];
        cout << "Age : ";
        cin >>age[i];
        cout <<"Point : ";
        cin >>point[i];
        cout <<"Jersey : ";
        cin >>jersey[i];
    }
    cout <<"ENTER 1 FOR SEARCHING BY NAME "<<endl;
    cout <<"ENTER 2 FOR SEARCHING BY NATIONALITY "<<endl;
    cout <<"ENTER 3 FOR SEARCHING BY CLUB "<<endl;
    cout <<"ENTER 4 FOR SEARCHING BY AGE "<<endl;
    cout <<"ENTER 5 FOR SEARCHING BY POINT "<<endl;
    cout <<"ENTER 6 FOR SEARCHING BY JERSEY "<<endl;
    cin >>choice;

    cout <<"\t\t****DISPLAYING OUTPUT********"<<endl;



    if (choice==1)
    {
        string n;
        cout <<"enter name to search : ";
        cin >>n;
        for (int i =0; i<length; i++)
        {
            if (n==name [i])
            {
                cout <<"Name : "<<name [i]<<endl;
                cout <<"Nationality : "<<nationality [i]<<endl;
                cout <<"Club : "<<club [i]<<endl;
                cout <<"Age : "<<age [i]<<endl;
                cout <<"Point : "<<point [i]<<endl;
            }
        }

    }
    else if (choice ==2)
    {
        string n;
        cout <<"enter nationality to search : ";
        cin >>n;

        for (int i =0; i<length; i++)
        {
            if (n==nationality [i])
            {
                cout <<"Name : "<<name [i]<<endl;
                cout <<"Nationality : "<<nationality [i]<<endl;
                cout <<"Club : "<<club [i]<<endl;
                cout <<"Age : "<<age [i]<<endl;
                cout <<"Point : "<<point [i]<<endl;
            }
        }
    }
    else if (choice ==3)
    {
        string n;
        cout <<"enter club to search : ";
        cin >>n;
        for (int i =0; i<length; i++)
        {
            if (n==club [i])
            {
                cout <<"Name : "<<name [i]<<endl;
                cout <<"Nationality : "<<nationality [i]<<endl;
                cout <<"Club : "<<club [i]<<endl;
                cout <<"Age : "<<age [i]<<endl;
                cout <<"Point : "<<point [i]<<endl;
            }
        }
    }
    else if (choice ==4)
    {

        cout <<"enter min age to search : ";
        cin >>min;
        cout <<"enter max age to search : ";
        cin >>max;

        for (int i =0; i<length; i++)
        {
            if (age [i]>=min && age [i]<=max)
            {
                cout <<"Name : "<<name [i]<<endl;
                cout <<"Nationality : "<<nationality [i]<<endl;
                cout <<"Club : "<<club [i]<<endl;
                cout <<"Age : "<<age [i]<<endl;
                cout <<"Point : "<<point [i]<<endl;
            }
        }
    }
    else if (choice ==5)
    {
        cout <<"enter min point to search : ";
        cin >>min;
        cout <<"enter max point to search : ";
        cin >>max;
        for (int i =0; i<length; i++)
        {
            if (point [i]>=min && point [i]<=max)
            {
                cout <<"Name : "<<name [i]<<endl;
                cout <<"Nationality : "<<nationality [i]<<endl;
                cout <<"Club : "<<club [i]<<endl;
                cout <<"Age : "<<age [i]<<endl;
                cout <<"Point : "<<point [i]<<endl;
            }
        }
    }
     else if (choice ==6)
    {
        cout <<"enter min jersey to search : ";
        cin >>min;
        cout <<"enter max jersey to search : ";
        cin >>max;
        for (int i =0; i<length; i++)
        {
            if (jersey [i]>=min && jersey [i]<=max)
            {
                cout <<"Name : "<<name [i]<<endl;
                cout <<"Nationality : "<<nationality [i]<<endl;
                cout <<"Club : "<<club [i]<<endl;
                cout <<"Age : "<<age [i]<<endl;
                cout <<"Point : "<<point [i]<<endl;
                cout <<"Jersey : "<<jersey [i]<<endl;

            }
        }
    }
    return 0;

}



