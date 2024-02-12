#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void UpMargini(int n, char cuvant[30])
{
    char c;
    int i;
    c=cuvant[0];
    c=toupper(c);
    cuvant[0]=c;
    for (i=0;i<n;i++)
    {
        if((cuvant[i+1]==' ')||(cuvant[i-1]==' '))
        {
            c=cuvant[i];
            c=toupper(c);
            cuvant[i]=c;
        }
    }
    c=cuvant[n-1];
    c=toupper(c);
    cuvant[n-1]=c;
}
int main()
{
    char cuvant[30];
    int n;
    printf ("Sa se citeasca sirul:");
    gets(cuvant);
    n=strlen(cuvant);
    UpMargini(n, cuvant);
    printf ("Sirul este acum: %s", cuvant);
    return 0;
}
