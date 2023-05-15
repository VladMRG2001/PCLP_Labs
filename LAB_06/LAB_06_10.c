#include <stdio.h>
#include <stdlib.h>

void Identitate (int m1, int m2, int v1[10], int v2[10], int *p)
{
    int i, d=0;
    for (i=0;(i<m1)&&(d==0);i++)
        {
            if (v1[i]!=v2[i]) d=1;
        }
    *p=d;

}

int main()
{
    int n1, n2, m1, m2, i, j, matrice1[10][10], matrice2[10][10], identitate=0;
    printf ("Sa se citeasca numarul de linii ale matricei 1: ");
    scanf ("%d", &n1);
    printf ("Sa se citeasca numarul de coloane ale matricei 1: ");
    scanf ("%d", &m1);
    printf ("Sa se citeasca numarul de linii ale matricei 2: ");
    scanf ("%d", &n2);
    printf ("Sa se citeasca numarul de coloane ale matricei 2: ");
    scanf ("%d", &m2);

    if ((n1==n2)&&(m1==m2))
    {
        printf ("Sa se citeasca elementele matricei 1:\n");
        for (i=0;i<n1;i++)
        {
            for (j=0;j<m1;j++)
            {
                scanf ("%d", &matrice1[i][j]);
            }
        }
        printf ("Sa se citeasca elementele matricei 2:\n");
        for (i=0;i<n2;i++)
        {
            for (j=0;j<m2;j++)
            {
                scanf ("%d", &matrice2[i][j]);
            }
        }
        for (i=0;(i<n1)&&(identitate==0);i++)
        {
            Identitate (m1, m2, matrice1[i], matrice2[i], &identitate);
        }
        if (identitate==0) printf ("Cele doua matrice sunt identice.");
        else printf ("Cele doua matrice nu sunt identice.");
    }
    else printf ("Cele doua matrice nu sunt identice.");

    return 0;
}
