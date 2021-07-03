#include <iostream>

using namespace std;

int main()
{
    float a, b, c;

    cout << "enter the first number !!";
    cin >> a;

    cout << "enter the second number !!";
    cin >> b;

    cout << "enter 1 for plus\nenter 2 for minus \nenter 3 for multiplication\n enter 4 for divide !!\n";
    cin >> c;

    if(c==1){
        cout<< "Result is " << a+b;
    }
    else if(c==2){
      cout<< "Result is  "<< a-b;
    }
    else if(c==3){
        cout<< "Result is " << a*b;
    }
     else if(c==4){
        cout<< "Result is " << a/b;
    }
    else{
        cout << "Wrong choice!! ";
    }
    return 0;
}
