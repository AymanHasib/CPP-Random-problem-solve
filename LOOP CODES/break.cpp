#include <iostream>
using namespace std;
int main(){
    for(int a=0;a<=10;a++){
        if(a%2==0){
            break; // or , continue
        }
        cout << a << endl;
    }
return 1;
}
