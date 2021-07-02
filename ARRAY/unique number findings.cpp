#include <iostream>
#include <string.h>
using namespace std;

main()
{
    int length,unique;
    cout << "Enter how many numbers you input "<<endl;
    cin >>length;
    int number [length];
    cout << "Enter those numbers"<<endl;

    for (int i = 0; i<length; i++){
        cin >>number [i];


    }
    unique = number [0];

    for (int i = 0; i<length; i++){
        if (unique != number [i] && unique > number [i]){
            //unique != number [i];
            cout << unique <<endl;
        }
    }

    return 0;

}



