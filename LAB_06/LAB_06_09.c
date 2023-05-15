#include <stdio.h>
#include <stdlib.h>

void SumaLinie (int m, int linie[10], int *k)
{
    int i, s=0;
    for (i=0;i<m;i++)
    {
        s=s+linie[i];
        *k=s;
    }
}

void SumaColoana (int n, int coloana[10], int *k)
{
    int i, s=0;
    for (i=0;i<n;i++)
    {
        s=s+coloana[i];
        *k=s;
    }
}

int main()
{
    int n, m, matrice[10][10], i, j, s, maximlinie=0, maximcoloana=0, pozlinie, pozcol, coloana[10];
    printf ("Sa se citeasca numarul de linii:");
    scanf ("%d", &n);
    printf ("Sa se citeasca numarul de coloane:");
    scanf ("%d", &m);
    printf ("Sa se citeasca elementele matricei:");
    for (i=0;i<n;i++)
    {
            for (j=0;j<m;j++)
            {
                scanf ("%d", &matrice[i][j]);
            }
    }
    for(i=0;i<n;i++)
    {
        SumaLinie(m, matrice[i], &s);
        if (maximlinie<s)
        {
            maximlinie=s;
            pozlinie=i+1;
        }
    }
    s=0;
    int k;
    for (j=0;j<m;j++)
        {
            k=0;
            for (i=0;i<n;i++)
            {
                coloana[k++]=matrice[i][j];
            }
            SumaColoana(n, coloana, &s);
            if (maximcoloana<s)
            {
                maximcoloana=s;
                pozcol=j+1;
            }
            }
    printf ("Suma maxima pe linie este %d pe linia %d, iar suma maxima pe coloana este %d pe coloana %d.", maximlinie, pozlinie, maximcoloana, pozcol);

    return 0;
}
