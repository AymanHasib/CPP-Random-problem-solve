#include<stdio.h>
#include<stdlib.h>
int main ()
{
    FILE *apointer;
    apointer = fopen ("muri.txt","w");
    fprintf (apointer,"HELLO WORLD");
    fclose (apointer);
    return 0;
}
