#include <iostream>
using namespace std;
int main(){
    char ch[]="Hello    world    BD";
    int i=0,count=0;
    while(ch[i]!='\0'){
            cout << ch[i]+0 << " " ;
            i++;
    }
    //cout << "Blank space: " << count;
return 0;
}
