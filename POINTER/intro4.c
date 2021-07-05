#include<stdio.h>
int main ()
{
    int a[4]={100,200,300,400};
    int *p;
    p=&a[0];

    for (int i=0;i<4;i++){
        printf ("VALUE %d: %d\n",i+1,*p);
        p++;

    }


    return 0;
}




