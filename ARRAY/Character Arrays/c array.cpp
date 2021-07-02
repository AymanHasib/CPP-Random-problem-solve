#include <iostream>
using namespace std;
int main(){
    int choice,value = 0;
    cout << "enter ur choice"<<endl;
    cin >>choice;
    int element [choice];

    cout << "enter your numbers"<<endl;

    //cin >> element[choice];
    for (int i = 0; i < choice ; i++){
    cin >> element [i];
        cout << element [i] <<endl;
        value= element [i]+element [i];
        cout << value <<endl;
    }


return 0;
}
