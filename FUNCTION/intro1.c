#include<stdio.h>

int sum (int a,int b);


int main ()
{
    int num1,num2,result;
    scanf ("%d %d",&num1,&num2);
    result=sum(num1,num2);
    printf ("sum: %d\n",result);

    return 0;
}
int sum (int a,int b)
{
    return a* b;
}


