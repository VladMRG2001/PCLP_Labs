#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k;
    printf ("Sa se citeasca de la tastatura numarul de patrate ce se doresc a fi afisate: ");
    scanf ("%d", &n);
    printf ("Patratele sunt afisate astfel: \n");
    for (k=1;k<=n;k++)
    {
        for(i=1;i<=k;i++)
        {
            for(j=1;j<=k;j++)
                printf("%d", k);
            printf ("\n");
        }
    }
}
