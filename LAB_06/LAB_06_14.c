#include <stdio.h>
#include <stdlib.h>

void Descrescator (int n, int v[10])
{
    int i, c;
    for (i=0;i<n-1;i++)
    {
        if (v[i]<v[i+1])
        {
            c=v[i];
            v[i]=v[i+1];
            v[i+1]=c;
            i=-1;
        }
    }
}
int main()
{
    int n, m, i, j, a[10][10];
    printf ("Sa se citeasca numarul de linii:");
    scanf ("%d", &n);
    printf ("Sa se citeasca numarul de coloane:");
    scanf ("%d", &m);
    printf ("Sa se citeasca elementele matricei:");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        if (i%2==0) Descrescator (m, a[i]);
    }
    printf ("Matricea ordonata descrescator pe linile pare este de forma:\n\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf ("%d", a[i][j]);
        }
        printf ("\n");
    }

    return 0;
}
