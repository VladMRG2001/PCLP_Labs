#include <stdio.h>
#include <stdlib.h>

void Identitate (int m, int e, int v1[10], int v2[10], int *p)
{
    int i, d=0, c=0;
    for (i=0;(i<m)&&(d==0);i++)
        {
            if (v1[i]!=v2[i]) c++;
        }
    if (c==0) d=1;
    *p=d;

}

int main()
{
    int n, e, m, i, j, matrice[10][10], vector[10], identitate=0, poz;
    printf ("Sa se citeasca numarul de linii ale matricei: ");
    scanf ("%d", &n);
    printf ("Sa se citeasca numarul de coloane ale matricei: ");
    scanf ("%d", &m);
    printf ("Sa se citeasca numarul de elemente ale vectorului: ");
    scanf ("%d", &e);
    if (m==e)
    {
        printf ("Sa se citeasca elementele matricei:\n");
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            {
                scanf ("%d", &matrice[i][j]);
            }
        }
        printf ("Sa se citeasca elementele vectorului:\n");
        for (j=0;j<e;j++)
            {
                scanf ("%d", &vector[j]);
            }
        for (i=0;(i<n)&&(identitate==0);i++)
        {
            Identitate (m, e, matrice[i], vector, &identitate);
            if (identitate==1) poz=i+1;
        }
        if (identitate==1) printf ("Vectorul coincide cu o linia %d a matricei. (Liniile fiind considerate ca fiind numerotate de la 1 la %d)", poz, e);
        else printf ("Vectorul nu coincide cu nici o linie a matricei.");
    }
    else printf ("Vectorul nu coincide cu nici o linie a matricei.");

    return 0;
}

