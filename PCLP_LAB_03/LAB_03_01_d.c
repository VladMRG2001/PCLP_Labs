#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, v[100], i, k, c;
    printf ("Sa se citeasca de la tastatura cate numere vor fi introduse in vector: ");
    scanf ("%d", &n);
    printf ("\nSa se citeasca elementele vectorului:\n");
    for (i=1;i<=n;i++)
        scanf ("%d", &v[i]);
    printf ("\nVectorul ale carui elemente sunt numerele de divizori ale fiecarui element din vectorul precedent este de forma: ");
    for (i=1;i<=n;i++)
    {
        c=1;
        for (k=1;k<=v[i]/2;k++)
            {
                if (v[i]%k==0) c++;
            }
        v[i]=c;
        printf ("%d ", v[i]);

    }
}
