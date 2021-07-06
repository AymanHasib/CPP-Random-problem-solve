#include<iostream>
using namespace std;
int add(int a, int b); // Function prototype
int sub(int a, int b); // Function prototype
int main()
{
    int n1,n2;
    cin >> n1 >> n2;
    int var = add(n1, n2);
    cout << var;
    return 0;
}
int add(int a, int b){
    return a+b;
}

