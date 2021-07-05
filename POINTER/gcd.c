#include<stdio.h>
int main()
{
    int a,b,l,gcd;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        l=a;
    }
    else
    {
        l=b;
    }
    while(1)
    {
        if(a%l==0&&b%l==0)
        {
            gcd=l;
            break;
        }
        else
        {
            l--;
        }
    }
    printf("GCD=%d",gcd);
    return 0;
}

