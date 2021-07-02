#include <iostream>
#include <string.h>
using namespace std;

main()
{
    int value[],size;
    cout <<"enter the range of numbers"<<endl;
    cin >>size;
    for (int i=0;i<size;i++){
        cin >>value[i];
     if (value[i]%2==0){
        cout <<"the number "<<value[i]<<" is an even number"<<endl;
     }
     else {
        cout <<"the number "<<value[i]<<" is a odd number"<<endl;
     }


    }

    return 0;
}
