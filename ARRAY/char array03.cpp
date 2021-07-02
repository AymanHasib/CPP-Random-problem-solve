#include <iostream>
#include <string.h>
using namespace std;

main(){
    int counting=0;
    int gonona=0,digits=0,special=0;
    //char x[]={'a','e','i','o','u','\0'};
    char word[100];
    cin >> word;
    for (int i =0;i<strlen(word);i++){
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'){
            counting++;
        }
       else if (word[i] >= 48 && word[i]<=57 ){
            digits++;
        }
        else if(word[i]>= '!' && word[i]<='/'){
            special++;
        }
        else {
            gonona++;
        }
    }

    cout <<word << " has "<< counting << " vowels" <<endl;
    cout <<word << " has "<< gonona << " consonent "<<endl;
    cout <<word << " has "<< digits << " digits "<<endl;
    cout <<word << " has "<< special << " special characters "<<endl;
return 0;
}
