#include <stdio.h>
#include <stdlib.h>
void PermutareDreapta (int linie[10], int m)
{
    int j, c;
            c=linie[m-1];
            for (j=m-1;j>0;j--)
            {
                linie[j]=linie[j-1];
            }
            linie[0]=c;
}

void PermutareStanga (int linie[10], int m)
{
    int j, c;
            c=linie[0];
            for (j=0;j<m-1;j++)
            {
                linie[j]=linie[j+1];
            }
            linie[m-1]=c;
}

int main()
{
    int matrice[10][10], i, j, n, m, k=0;
    printf("Sa se citeasca numarul de linii:");
    scanf("%d", &n);
    printf("Sa se citeasca numarul de coloane:");
    scanf("%d", &m);
    printf("Sa se citeasca elementele matricei:");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf ("%d", &matrice[i][j]);
        }
    }
    for (j=0;j<n;j++)
    {
        k=0;
        while(k<=j)
        {
            PermutareDreapta (matrice[j], m);
            k++;
        }
    }

    printf ("Matricea permutata la dreapta este de forma:\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf ("%d ", matrice[i][j]);
        }
        printf ("\n");
    }
    for (j=0;j<n;j++)
    {
        k=0;
        while(k<=j)
        {
            PermutareStanga (matrice[j], m);
            k++;
        }
    }

    printf ("Matricea permutata la stanga este de forma:\n *se presupune ca este identica cu matricea initiala*\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf ("%d ", matrice[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
