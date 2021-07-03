#include <iostream>

using namespace std;

int main()
{


    float b;


    float totaldc = 30*800;
    float totalds = 30*400;
    float totalcd = 30*805;
    float totaldr = 30*600;
    float totaltt = 30*4000;

                cout <<"\n\nWELCOME TO USBANGLA AIRLINES (HELPING YOU FOR REACHING DEATH)\n\n"<<endl;


    cout <<"enter 1 for traveling dhaka-coxs bazar \nenter 2 for traveling dhaka-shylet \nenter 3 for traveling coxs bazar-dhaka \nenter 4 for traveling dhaka-rajshahi \nenter 5 for traveling teknaf-tetulia"<<endl;
        cin >>b;

            if (b==1){
                cout <<"total cost of traveling from dhaka-coxsbazar is taka = "<<totaldc<<endl;

            }
             else if (b==2){
                cout <<"total cost of traveling from dhaka-shylet is taka = "<<totalds<<endl;

            }
            else if (b==3){
                cout <<"total cost of traveling from coxs bazar-dhaka is taka = "<<totalcd<<endl;

            }
            else if (b==4){
                cout <<"total cost of traveling from dhaka-rajshahi is taka = "<<totaldr<<endl;

            }
            else if (b==5){
                cout <<"total cost of traveling from teknaf-tetulia is taka = "<<totaltt<<endl;

            }
            else {
                cout <<"CONGRATULATIONS YOU CANNOT GO !!!!"<<endl;
            }

    return 0;
}
