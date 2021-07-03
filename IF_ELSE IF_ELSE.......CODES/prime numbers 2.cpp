#include <iostream>

using namespace std;

int main()
{
    int number_1;
    int number_2;
    cout <<"enter your first number = ";
    cin >>number_1;
    cout <<"enter your second number =";
    cin >>number_2;
    int flag=0;
    for (int num=number_1;num<=number_2;num++){
        flag=0;
        cout << "\nCHECKING "<< num << endl;
        for (int i=2;i<=num-1;i++){
            if (num%i==0)
            {
                flag=1;
            }
            //cout << num << "%" << i << " = " << (num%i)  << " flag= "<< flag <<endl;

        }
        if (flag ==1)
            cout <<"\n"<< num <<" not a prime number";
        else
            cout <<"\n"<< num <<" its a prime number";
    }

    return 0;
}
