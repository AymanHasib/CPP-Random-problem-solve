#include <iostream>

using namespace std;

main(){


    int length;
    float sum=0;
    float average;
    cout <<"enter a number from 1-10 for the amount of subjects"<<endl;
    cin >>length;
    float marks [length];
    for (int i=1;i<=length;i++){

        cout << "enter the marks of the subject"<<endl;
        cin >>marks [i];
        sum= sum + marks [i];

    }

    cout <<"the marks of total subjects are = "<<sum<<endl;
    average = sum/length;
    cout <<"the average is = "<<average<<endl;




return 0;
}
