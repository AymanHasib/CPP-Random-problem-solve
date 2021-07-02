#include<stdio.h>
#include<stdlib.h>
int main ()
{
    FILE *apointer;
    apointer = fopen ("muri.txt","a");
    //fprintf (apointer,"HELLO WORLD");
    //char line [200];
    /*while (!feof (apointer)){
        fgets (line, 200, apointer);
        puts (line);
    }*/
    fprintf (apointer,"Hello");
    fclose (apointer);
    return 0;
}

