#include<stdio.h>
#include<stdlib.h>

int main ()
{
    FILE *adib;
    adib = fopen ("mara.txt","r");
    char str1[200],str2[200];
    int i=0,j,len=0;
    while (!feof(adib)){
        fgets (str1,200,adib);
        puts (str1);

    }
    while (str1[i]!='\0'){
        i++;
        len++;
    }
    for (j=0,i=len-1;i>=0;i--,j++){
        str2[j]=str1[i];

    }
    str2[j]='\0';
    printf ("%s",str2);
    adib = fopen ("mara.txt","w");
    fprintf (adib,str2);
    fclose (adib);




    return 0;
}
