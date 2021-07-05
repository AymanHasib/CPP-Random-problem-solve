#include<stdio.h>
int main ()
{
    int eva=7,ayman=10,sum;

    int *p1,*p2;

    p1=&eva;
    p2=&ayman;

    sum = *p1 * *p2;
    printf ("SEX: %d",sum);


    return 0;
}


