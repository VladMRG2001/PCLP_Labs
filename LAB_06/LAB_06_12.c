#include <stdio.h>
#include <stdlib.h>

void Interschimbare (int n, int vector1[10], int vector2[10])
{
    int i, c;
    for(i=0;i<n;i++)
    {
        c=vector1[i];
        vector1[i]=vector2[i];
        vector2[i]=c;
    }
}

int main()
{
    int n1, m1, n2, m2, i, j, matrice1[10][10], matrice2[10][10], linie1, linie2, coloana1, coloana2, col1[10], col2[10];
    printf ("Sa se citeasca numarul de linii ale matricei 1: ");
    scanf ("%d", &n1);
    printf ("Sa se citeasca numarul de coloane ale matricei 1: ");
    scanf ("%d", &m1);
    printf ("Sa se citeasca numarul de linii ale matricei 2: ");
    scanf ("%d", &n2);
    printf ("Sa se citeasca numarul de coloane ale matricei 2: ");
    scanf ("%d", &m2);
    printf ("Sa se citeasca numarul liniei 1 pentru interschimbare: ");
    scanf ("%d", &linie1);
    printf ("Sa se citeasca numarul liniei 2 pentru interschimbare: ");
    scanf ("%d", &linie2);
    printf ("Sa se citeasca numarul coloanei 1 de interschimbare: ");
    scanf ("%d", &coloana1);
    printf ("Sa se citeasca numarul coloanei 2 de interschimbare: ");
    scanf ("%d", &coloana2);

    printf ("Sa se citeasca elementele matricei 1:");
    for (i=0;i<n1;i++)
    {
        for (j=0;j<m1;j++)
        {
            scanf ("%d", &matrice1[i][j]);
        }
    }
    printf ("Sa se citeasca elementele matricei 2:");
    for (i=0;i<n2;i++)
    {
        for (j=0;j<m2;j++)
        {
            scanf ("%d", &matrice2[i][j]);
        }
    }

    if ((m1==m2)&&(n1==n2))
    {
        printf ("\nSe realizeaza interschimbarea pe linii:\n");
        Interschimbare(m1, matrice1[linie1], matrice2[linie1]);
        Interschimbare(m1, matrice1[linie2], matrice2[linie2]);
        printf ("Matricea 1 dupa interschimbare e de forma: \n");
        for (i=0;i<n1;i++)
        {
            for (j=0;j<m1;j++)
            {
                printf ("%d ", matrice1[i][j]);
            }
            printf ("\n");
        }
        printf ("\n\n");
        printf ("Matricea 2 dupa interschimbare e de forma: \n");
        for (i=0;i<n2;i++)
        {
            for (j=0;j<m2;j++)
            {
                printf ("%d ", matrice2[i][j]);
            }
            printf ("\n");
        }
        printf ("\n\n");

        printf ("\nSe realizeaza interschimbarea pe coloane:\n");
        Interschimbare(m1, matrice1[linie1], matrice2[linie1]);
        Interschimbare(m1, matrice1[linie2], matrice2[linie2]);
        for (i=0;i<n1;i++)
        {
            col1[i]=matrice1[i][coloana1];
            col2[i]=matrice2[i][coloana1];
        }
        Interschimbare(n1, col1, col2);
        for (i=0;i<n1;i++)
        {
             matrice1[i][coloana1]=col1[i];
             matrice2[i][coloana1]=col2[i];
        }

        for (i=0;i<n1;i++)
        {
            col1[i]=matrice1[i][coloana2];
            col2[i]=matrice2[i][coloana2];
        }
        Interschimbare(n1, col1, col2);
        for (i=0;i<n1;i++)
        {
            matrice1[i][coloana2]=col1[i];
            matrice2[i][coloana2]=col2[i];
        }

        printf ("Matricea 1 dupa interschimbare e de forma: \n");
        for (i=0;i<n1;i++)
        {
            for (j=0;j<m1;j++)
            {
                printf ("%d ", matrice1[i][j]);
            }
            printf ("\n");
        }
        printf ("\n\n");
        printf ("Matricea 2 dupa interschimbare e de forma: \n");
        for (i=0;i<n2;i++)
        {
            for (j=0;j<m2;j++)
            {
                printf ("%d ", matrice2[i][j]);
            }
            printf ("\n");
        }
        printf ("\n\n");
    }
    else printf ("Nu s-a putut realiza interschimbarea.");
    return 0;
}
