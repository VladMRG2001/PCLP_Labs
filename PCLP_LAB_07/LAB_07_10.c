#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void Up (int n, char cuvant[30])
{
    char c;
    int i;
    for (i=0;i<n;i++)
    {
        if((cuvant[i]=='a')||(cuvant[i]=='e')||(cuvant[i]=='i')||(cuvant[i]=='o')||(cuvant[i]=='u'))
        {
            c=cuvant[i];
            c=toupper(c);
            cuvant[i]=c;
        }
    }

}

int main()
{
    char cuvant[30];
    int n;
    printf ("Sa se citeasca sirul:");
    gets(cuvant);
    n=strlen(cuvant);
    Up(n, cuvant);
    printf ("Sirul este acum: %s", cuvant);
    return 0;
}
