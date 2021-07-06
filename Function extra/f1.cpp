#include <iostream>
using namespace std;
int value ();
int function (int x,int y){
    cout << "value : "<<x+y<< "\n";
}
int main ()
{
    function (20,20);
    value ();
    return 0;
}
int value (){
    int x,y,sum=0;
    cout << "Enter the two values : ";
    cin >>x>>y;

    sum = x+y;
    if (sum%2==0 && x>y){
        cout << "EVEN NUMBER"<<endl;
    }
    else if (sum%2!=0 && x>y){
        cout << "ODD NUMBER"<<endl;
    }
    else
        cout << "Enter the 1st digit bigger then the 2nd one"<<endl;

}
