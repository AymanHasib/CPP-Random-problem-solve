#include <iostream>

using namespace std;

int main()
{
    int SET = 10;
    int number,chance=3;

    while (number!=SET && chance >=1){
        cout << "Enter a number:"<<endl;
        cin >>number;
        if (number==SET){
            cout << "you entred a number which is correct to the predicted number"<<endl;
        }
        else if (number>SET){
            chance--;
            cout <<"you entered a number which is greater then the predicted number"<<endl;
            cout << "You have " << chance << " chance left";
        }
        else{
            chance--;
            cout <<"you entered a number which is less then the predicted number"<<endl;
            cout << "You have " << chance << " chance left";
        }
    }
    return 0;
}
