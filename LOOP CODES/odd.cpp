#include <stdio.h>
int main ()
{
    int range,i,count=0;
    scanf ("%d",&range);
    for (i=1;i<=range;i++)
    {
        if (i%2!=0){
            count++;
        }
    }
    printf ("%d",count);

    return 0;
}
