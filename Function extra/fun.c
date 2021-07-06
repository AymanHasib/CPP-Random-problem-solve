#include<stdio.h>
#include<stdlib.h>
int adib (int a, int b);
//int n1,n2;
int main ()
{

    int n1,n2,x;
    scanf ("%d",&n1);
    scanf ("%d",&n2);
    x=adib (n1,n2);
    printf ("EVEN: %d",x);
    return 0;
}
int adib (int a, int b){
    int i,count=0;
    if (a<b){
         for (i=a;i<=b;i++){
            if (i%2==0){
                count++;
            }
         }
         return count;
    }
    else if (b<a){
         for (i=b;i<=a;i++){
            if (i%2==0){
                count++;
            }
         }
         return count;
    }

    return;
}

