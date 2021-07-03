#include <iostream>

using namespace std;

int doadd(int a, int b, int c, int d){
    int answer = a + b + c + d;

    return answer;
}

int domultply(int p, int q, int r){

    int total = p*q*r;
    return total;
}


int main()
{

    cout << "the value is ";
    cout << doadd (3, 4, 5, 6) <<endl;
    cout <<"the value of multiplication is ";
    cout << domultply (3, 4, 5)<<endl;

    if (3<4);
    cout <<"the statement is true"<<endl;

    if (3<=3);
    cout <<"the statement is also true";


    return 0;
}
