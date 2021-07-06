#include <iostream>
using namespace std;
main(){
  int value[6] ={2,1,0,5,7,1};
  int max=value[0];

  for (int i = 1; i<6;i++){
   if( max<value[i]){
        max=value[i];
   }
  }
  cout <<max<<endl;


return 0;
}
