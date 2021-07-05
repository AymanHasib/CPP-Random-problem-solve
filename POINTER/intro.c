#include<stdio.h>
int main ()
{
    int eva=7;
    int *p=&eva;
    printf ("VALUE OF EVA: %d\n",eva);
    printf ("ADRESS OF EVA: %x\n",&eva);
    printf ("ADRESS OF EVA: %x\n",p);
    printf ("ADRESS OF EVA: %x\n",*p);


    return 0;
}
