#include<stdio.h>
int main()
{
    int a,b,l,lcd;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        l=a;
    }
    else
    {
        l=b;
    }
    while(1)
    {
        if(l%a==0&&l%b==0)
        {
            lcd=l;
            break;
        }
        else
        {
            l++;
        }
    }
    printf("LCD=%d",lcd);
    return 0;
}
