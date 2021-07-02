#include <iostream>
using namespace std;
main()
{
    int length,dayy;
    cout << "Enter the day number : ";
    cin >> length;
    string day [length];
    int breakfast [length],lunch [length],dinner [length];
    cout << "The days list...maintain this list..in time of inputing data"<<endl;
    cout << "1.Sunday"<<endl;
    cout << "2.Monday"<<endl;
    cout << "3.Tuesday"<<endl;
    cout << "4.Wednesday"<<endl;
    cout << "5.Thursday"<<endl;
    cout << "6.Friday"<<endl;
    cout << "7.Saturday"<<endl<<endl;

    for (int i = 1; i<=length; i++){

        cout << "Enter the information !!!"<<endl;
        cout << "Day : ";
        cin >>day [i];
        cout << "Breakfast : ";
        cin >>breakfast [i];
        cout << "Lunch : ";
        cin >>lunch [i];
        cout << "Dinner : ";
        cin >>dinner [i];
    }
    cout << "Enter 1 for Sunday"<<endl;
    cout << "Enter 2 for Monday"<<endl;
    cout << "Enter 3 for Tuesday"<<endl;
    cout << "Enter 4 for Wednesday"<<endl;
    cout << "Enter 5 for Thursday"<<endl;
    cout << "Enter 6 for Friday"<<endl;
    cout << "Enter 7 for Saturday"<<endl<<endl;

    cout << "Enter the day number : ";
    cin >>dayy;

    if (dayy == 1){
        cout << "Day : "<<day [1]<<endl;
        cout << "Breakfast : "<<breakfast [1]<<endl;
        cout << "Lunch : "<<lunch [1]<<endl;
        cout << "Dinner : "<<dinner [1]<<endl;
    }
   else if (dayy == 2){
        cout << "Day : "<<day [2]<<endl;
        cout << "Breakfast : "<<breakfast [2]<<endl;
        cout << "Lunch : "<<lunch [2]<<endl;
        cout << "Dinner : "<<dinner [2]<<endl;
    }
    else if (dayy == 3){
        cout << "Day : "<<day [3]<<endl;
        cout << "Breakfast : "<<breakfast [3]<<endl;
        cout << "Lunch : "<<lunch [3]<<endl;
        cout << "Dinner : "<<dinner [3]<<endl;
    }
    else if (dayy == 4){
        cout << "Day : "<<day [4]<<endl;
        cout << "Breakfast : "<<breakfast [4]<<endl;
        cout << "Lunch : "<<lunch [4]<<endl;
        cout << "Dinner : "<<dinner [4]<<endl;
    }
    else if (dayy == 5){
        cout << "Day : "<<day [5]<<endl;
        cout << "Breakfast : "<<breakfast [5]<<endl;
        cout << "Lunch : "<<lunch [5]<<endl;
        cout << "Dinner : "<<dinner [5]<<endl;
    }
    else if (dayy == 6){
        cout << "Day : "<<day [6]<<endl;
        cout << "Breakfast : "<<breakfast [6]<<endl;
        cout << "Lunch : "<<lunch [6]<<endl;
        cout << "Dinner : "<<dinner [6]<<endl;
    }
    else if (dayy == 7){
        cout << "Day : "<<day [7]<<endl;
        cout << "Breakfast : "<<breakfast [7]<<endl;
        cout << "Lunch : "<<lunch [7]<<endl;
        cout << "Dinner : "<<dinner [7]<<endl;
    }
    else {
        cout << "Wrong input"<<endl;
    }
    return 0;

}



