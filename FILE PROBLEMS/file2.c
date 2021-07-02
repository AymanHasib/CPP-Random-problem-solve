#include<stdio.h>
int main ()
{
    FILE *adib;
    adib = fopen ("ayman.txt", "r");
    char readline [200];
    while (!feof (adib)){
        fgets (readline, 200, adib);
        puts (readline);
    }

    return 0;
}

