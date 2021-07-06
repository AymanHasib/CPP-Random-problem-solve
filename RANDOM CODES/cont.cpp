#include <iostream>
using namespace std;

int main() {

    int N,M,P,Q;
    cin >> N >> M;

    if (N!=M && N<M && N>=0 && N<=1000 && M>=0 && M<=1000){
        P=M-N;
        if(P!=1)
            cout << "Dr. Chaz will have "<<P<< " pieces of chicken left over!"<<endl;
        else
            cout << "Dr. Chaz will have "<<P<< " piece of chicken left over!"<<endl;
    }
    else if (N!=M && N>M && N>=0 && N<=1000 && M>=0 && M<=1000){
        Q=N-M;
        if(Q!=1)
            cout << "Dr. Chaz needs "<<Q<<" more pieces of chicken!"<<endl;
        else
            cout << "Dr. Chaz needs "<<Q<<" more piece of chicken!"<<endl;
    }



    return 0;
}

