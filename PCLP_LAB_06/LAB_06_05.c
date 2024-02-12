#include <stdio.h>
#include <stdlib.h>

void PozMinim (int n, int v[10], int poz[10], int *k)
{
    int i, minim=999, j=0;
    for (i=0;i<n;i++)
    {
        if (minim>v[i]) minim=v[i];
    }
    for (i=0;i<n;i++)
    {
        if (minim==v[i])
        {
            poz[j]=i;
            j++;
            *k=j;
        }
    }
}

int main()
{
    int n, v[10], i, k, poz[10];
    printf ("Sa se citeasca numarul de elemente:");
    scanf ("%d", &n);
    printf ("Sa se citeasca elementele:");
    for (i=0;i<n;i++)
    {
        scanf ("%d", &v[i]);
    }
    PozMinim (n, v, poz, &k);
    printf ("Minimul se afla pe pozitiile: ");
    for (i=0;i<k;i++)
    {
        printf ("%d ", poz[i]);
    }

    return 0;
}
