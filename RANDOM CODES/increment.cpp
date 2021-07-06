#include<iostream>
using namespace std;
int main(){
    int i=1,j=2;
    int k = (i++ * ++j);
    cout << "value is:"<< --k;
return 0;
}
