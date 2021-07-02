#include<iostream>
using namespace std;
int main()
{
    int length,choice;
    float number [500],result;
    cout <<"enter students number : ";
    cin >>length;
    for (int i = 0; i<length; i++)
    {
        cin >>number [i];
    }
    while(choice != -1){
        cout << "Enter 1 for max number"<<endl;
        cout << "Enter 2 for min number"<<endl;
        cout << "Enter 3 for average"<<endl;
        cout << "Enter -1 to exit"<<endl;
        cout << "Now Enter your choice:"<<endl;
        cin >>choice;
        if(choice == 1){
            result = number[0];
            for (int i = 1 ; i<length; i++){
                if(result < number[i])
                    result = number[i];
            }
            cout << "Max : " << result <<endl;
        }
        else if(choice == 2){
            result = number[0];
            for (int i = 1 ; i<length; i++){
                if(result > number[i])
                    result = number[i];
            }
            cout << "Min : " << result <<endl;
        }
        else if(choice == 3){
            result = 0;
            for (int i = 0 ; i<length; i++){
                result += number[i]; // result = result + number[i]
            }
            cout << "Average: " << (result/length)<<endl;
        }
    }
    return 0;
}

