#include<stdio.h>
int main()
{
    int x=10,y=9,sum=0;
    int *p,*q;

    p=&x;
    q=&y;
    y=*p;
    *p=15;
    *q=20;

    scanf("%d",&x);


    printf("Value of x: %d\n",x);
    printf("Value of y: %d\n",y);
    printf("Value of *p: %d\n",*p);
    printf("Value of *q: %d\n",*q);
    sum=p+q;
    printf ("%d",sum);

    return 0;
}
