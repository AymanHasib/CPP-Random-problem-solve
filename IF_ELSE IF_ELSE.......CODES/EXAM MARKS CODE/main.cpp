#include <iostream>

using namespace std;

int main()
{

    int a;

        cout <<"enter your subject score !!"<<endl;
            cin >>a;

    if (a<32){

        cout <<"you failed in the subject and your grade is F"<<endl;
    }

    else if(a>=33 && a<=39){

        cout <<"you passed the exam and grade is D"<<endl;
    }

    else if(a>=40 && a<=49){

        cout <<"you passed the exam and grade is C"<<endl;
    }

      else if(a>=50 && a<=59){

        cout <<"you passed the exam and grade is B"<<endl;
    }

      else if(a>=60 && a<=69){

        cout <<"you passed the exam and grade is A-"<<endl;
    }

      else if(a>=70 && a<=79){

        cout <<"you passed the exam and grade is A"<<endl;
    }
      else if(a>=80 && a<=100){

        cout <<"you passed the exam and grade is A+"<<endl;
    }


    else {

        cout <<"you chose the wrong number !!"<<endl;
    }

    return 0;
}
