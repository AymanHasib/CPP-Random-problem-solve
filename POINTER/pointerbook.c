#include<stdio.h>
int main ()
{

    int a [5]={1,2,3,4,5};
    int *adib,i;
    adib = &a[0];
    for (i=0;i<5;i++){
        printf ("%d\t",*adib);
        *adib++;
    }

    return 0;
}



