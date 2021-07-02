#include <iostream>
using namespace std;
int number [500],range,index;
void take_input(){
    cout << "Enter the range of your number"<<endl;
    cin >>range;
    cout << "Enter your numbers "<<endl;
    for (int i = 0; i<range; i++){
        cin >>number [i];
    }
}
void display_array(){
    for (int i = 0; i<range; i++){
        cout  << number [i] << " ";
    }
}
void remove_element(){
    cout << "Enter the index number you want to delete : ";
    cin >>index;
    cout << "Out put..."<<endl;
    for (int i = index; i<range; i++){
            number[i] = number[i+1];
    }
    range--;
}
main()
{
    take_input();
    remove_element();
    display_array();
    return 0;
}



