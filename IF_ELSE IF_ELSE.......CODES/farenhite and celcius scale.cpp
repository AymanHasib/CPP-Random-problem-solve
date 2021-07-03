#include <iostream>

using namespace std;

int main()
{   float value;
    float celcius;
    float farenhite;

    cout <<"press 1 for f-c.\npress 2 for c-f"<<endl;
    cin >>value;
    if (value==1){
        cout << "Enter Farenhite:";
        cin >> farenhite;
        celcius =(farenhite-32)*5/9 ;
        cout << "Convertion of Ferenhite to Celcius = "<<celcius<<endl;
    }
    else if (value == 2){
        cout <<"Enter Celcius:";
        cin >> celcius;
        farenhite =32+(celcius*9/5) ;
        cout << "Convertion of Celcius - Farenhite = "<<farenhite<<endl;

    }
    else {
        cout << "you press the wrong choice"<<endl;
    }
    return 0;
}
