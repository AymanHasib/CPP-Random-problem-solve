#include <iostream>

using namespace std;

int main()
{

    float a,c;

    cout <<"enter a number !!" <<endl;
        cin >> a;


    cout <<"enter 1 for meter-km \nenter 2 for km-meter \nenter 3 for min-sec \nenter 4 for sec-min\n";
        cin >>c;



            if (c==1){
                    cout <<"the value of meter-km is = "<< a/1000 <<endl;

            }

            else if (c==2){
                  cout <<"the value of km-meter is = "<< a*1000 <<endl;
            }


            else if (c==3){
                  cout <<"the value of min-sec is = "<< a*60 <<endl;
            }


            else if (c==4){
                  cout <<"the value of sec-min is = "<< a/60 <<endl;
            }


            else {
                cout <<"you chose the wrong option !!";
            }

    return 0;
}
