#include <iostream>
using namespace std;
int main(){
    char alphabet[5]={'a','1','e','p','i'};

    for (int i =0;i<5;i++){
        if (alphabet[i]=='a' || alphabet[i]=='e' || alphabet[i]=='i' || alphabet[i]=='o' || alphabet[i]=='u'){
            cout <<"vowel : "<<alphabet[i]<<endl;
        }
        /*else if(alphabet[i]>='0' && alphabet[i]<='9'){
            cout <<"digit : "<<alphabet[i]<<endl;
        }*/
         else if(alphabet[i]>=48 && alphabet[i]<=57){
            cout <<"digit : "<<alphabet[i]<<endl;
        }


        else {
            cout << "consenent : "<<alphabet[i]<<endl;
    }

    }

return 0;
}
