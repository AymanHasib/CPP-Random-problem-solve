#include <iostream>

using namespace std;

main(){
    int x=2;
    int y=4;
    int z=5;
    int chance= 3;
    int value1,value2,value3;

     for (int i=-1;i<=chance;i++){
    cout <<"Enter your three numbers which are between 0-10"<<endl;
        cin >>value1;//,value2,value3;
        cin >>value2;
        cin >>value3;

        if (value1==x && value2==y && value3==z){
            cout <<"you win the game"<<endl;
            break;
        }
        else {
            chance--;
            cout << "You have " << chance << " chance left"<<endl;
        }

     }
return 0;
}
