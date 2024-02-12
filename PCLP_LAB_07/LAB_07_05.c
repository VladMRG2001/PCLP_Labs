#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cuvant[100], semicuvant[99];
    int i, j, c=0, n;
    printf ("Sa se citeasca cuvantul:\n");
    gets (cuvant);
    n=strlen(cuvant);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if ((j!=i)&&(c==0)) semicuvant[j]=cuvant[j];
            else if ((j!=i)&&(c==1)) semicuvant[j-1]=cuvant[j];
            else if(j==i) c=1;
        }
        for(j=0;j<n-1;j++)
        {
            printf ("%c", semicuvant[j]);
        }
        printf ("\n");
        c=0;
    }

    return 0;
}
