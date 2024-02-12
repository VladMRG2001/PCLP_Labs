#include <stdio.h>
#include <stdlib.h>
void Citire (int *n, int *m, int matrice[10][10])
{
    int linii, coloane, i, j;
     printf ("Sa se citeasca numarul de linii ale matricei:");
    scanf ("%d", &linii);
    printf ("Sa se citeasca numarul de coloane ale matricei:");
    scanf ("%d", &coloane);
    printf ("Sa se citeasca elementele matricei:");
    for (i=0;i<linii;i++)
    {
        for (j=0;j<coloane;j++)
        {
            scanf ("%d", &matrice[i][j]);
        }
    }
    *n=linii;
    *m=coloane;
}

void CrescSauDescresc (int n, int v[10], int *p)
{
    int i, d=0, c=0;
    for (i=0;((i<n)&&(c==0));i++)
    {
        if (v[i]<v[i+1]) c=0;
        else c=1;
    }
    for (i=0;((i<n)&&(d==0));i++)
    {
        if (v[i]>v[i+1]) d=0;
        else d=1;
    }
    if (d==0) *p=0;
    else if (c==0) *p=0;
    else *p=1;

    }

int main()
{
    int n, m, i, j, matrice[10][10], k;
    Citire (&n, &m, matrice);
    for (i=0;i<n;i++)
    {
        CrescSauDescresc (m, matrice[i], &k);
        if (k==1)
        {
            for (j=0;j<m-1;j++)
            {
                matrice[i][j]=matrice[i+1][j];
            }
            i--;
            n--;
        }
    }

    printf ("\nMatricea este de forma:\n\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf ("%d", matrice[i][j]);
        }
        printf ("\n");
    }

    return 0;
}
