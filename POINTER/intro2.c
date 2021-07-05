#include<stdio.h>
int main ()
{
    int eva=7,ayman=10;

    int *p;

    p=&eva;
    printf ("EVA VALUE: %d\n",*p);

    p=&ayman;
    printf ("AYMAN VALUE: %d",*p);
    printf ("AYMAN VALUE: %d",*p);

    return 0;
}

