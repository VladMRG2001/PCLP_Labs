#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrice[100][100], n, maxim=0, minim=999, i, j;
    printf ("Cititi numarul de linii/coloane ale matricei patratice: ");
    scanf ("%d", &n);
    printf ("Sa se citeasca elementele matricei: ");
    for (i = 0; i < n;i++) {
        for (j=0;j<n;j++)
        {
            scanf ("%d", &matrice[i][j]);
            if (maxim<matrice[i][j]) maxim=matrice[i][j];
            if (minim>matrice[i][j]) minim=matrice[i][j];
        }
    }

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i==j) matrice[i][j]=maxim;
            if (i+j==n-1) matrice[i][j]=minim;
        }
    }

    printf ("Matricea este de forma:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf ("%d ", matrice[i][j]);
        }
        printf ("\n");
    }
return 0;
}
