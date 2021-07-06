#include<stdio.h>
int main()
{
    int i,a,n,b;
    scanf("%d%d%d",&a,&b,&n);
    for(i=1; i<=n; i++)
    {
        if(i%3!=0 && i%5!=0)
            printf("%d\n", i);
        if(i%3 == 0 && i%5!=0)
            printf("Fizz\n");
        if(i%5 == 0 && i%3!=0)
            printf("Buzz\n");
        if(i%5 == 0 && i%3==0)
            printf("FizzBuzz\n");
    }
    return 0;
}
