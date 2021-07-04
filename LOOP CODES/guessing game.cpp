#include <iostream>

using namespace std;

int main()
{
    int SET = 10;
    int number;
    while (number!=SET){
        cout << "Enter a number:"<<endl;
        cin >>number;
        if (number==SET){
            cout << "you entred a number which is correct to the predicted number"<<endl;
        }
        else if (number>SET){
            cout <<"you entered a number which is greater then the prected number"<<endl;
        }
        else {
            cout <<"you entered a number which is less then the prected number"<<endl;
        }
    }
    return 0;
}
