#include<iostream>
using namespace std;
class sum
{
    private:
        int a,b,t;
    public:
        void getvalue(){
            cout << "Enter the value of A and B"<<endl;
            cin >>a>>b;
        }
        void putvalue(){
            t=a+b;
            cout << "Addition of "<<a<< " & "<<b<< " is: "<<t<<endl;
        }

};
int main ()
{
    sum sumobject;
    sumobject.getvalue();
    sumobject.putvalue();

    return 0;
}
