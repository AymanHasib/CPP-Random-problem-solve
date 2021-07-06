#include<stdio.h>
#include<stdlib.h>
int prime (int val);
int main ()
{
    int n,x;
    scanf ("%d",&n);
    x=prime (n);
    if (x == 0)
    {
        printf ("Prime");
    }
    else
    {
        printf ("Not Prime");
    }

    return 0;
}
int prime (int val)
{

    int i,count=0;
    for (i=2; i<val; i++)
    {
        if (val%i==0)
        {
            count++;
        }
    }
    return count;

}


