#include <stdio.h>
#include <stdlib.h>


int main()
{
    int v[100], n, i, a[100], m=0, l, j;
    printf ("Sa se citeasca numarul de elemente ale vectorului: ");
    scanf ("%d", &n);
    printf ("Sa se citeasca elementele vectorului: ");
    for (i=0;i<n;i++)
    {
        scanf ("%d", &v[i]);
    }
    for (j=0;j<n;j++)
    {
        l=0;
        for (i=0;i<n;i++)
        {
            if (v[i]==v[j])
            {
                l++;
            }
        }
        if (l==1)
        {
           m++;
           a[m]=v[j];
        }
    }
    printf ("Vectorul alcatuit din elementele cu unica aparitie din cadrul vectorului precedent este ");
    if (m==0) printf ("multimea vida.");
    else
    {
           for (i=1;i<=m;i++)
    {
        printf ("%d ", a[i]);
    }
    }
}
