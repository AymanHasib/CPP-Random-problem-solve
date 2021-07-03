#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char a[1000],b[1000],c[1000],d[1000];
    cin >>a;
    cin >>b;
    cout << strlen (a)<<" ";
    cout << strlen (b) <<endl;
    cout <<a;
    cout <<b<<endl;
    d[0]=a[0];
    a[0]=b[0];
    b[0]=d[0];
    cout <<a<< " " ;
    cout <<b<<endl;
    return 0;
}
