#include<stdio.h>
int main ()
{
    FILE *adib;
    char name [50] = " AYMAN HASIB";
    int length = strlen (name),i;
    adib = fopen ("adib.txt","a");

    if (adib==NULL){
        printf ("NO FILE");
    }
    else {
        printf ("FILE PRESENT");
        for (i=0;i<length;i++){
            fputc (name [i],adib);

        }
        fclose (adib);
    }


    return 0;
}
