#include <iostream>

using namespace std;


int main()
{
   int a;
    cout <<"enter a number !!"<<endl;
        cin >> a;
    if (a%3==0 || a%5==0){
        cout <<"the number is even :)"<<endl;
    }

    else {
        cout <<"the number is odd :("<<endl;

    }

    return 0;
}
