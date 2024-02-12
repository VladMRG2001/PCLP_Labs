#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100], a[100], b[100], n, i, j=0, k=0;
    printf ("Cititi de la tastatura numarul de elemente ale vectorului : ");
    scanf ("%d", &n);
    printf ("Cititi elementele vectorului: ");
    for (i=1;i<=n;i++)
    {
        scanf ("%d", &v[i]);
         if (v[i]%2==0)
        {
            j++;
            a[j]=v[i];
        }
        else
        {
            k++;
            b[k]=v[i];
        }
    }
    printf ("Vectorul ale carui elemente sunt elememtele pozitive din vectorul principal sunt: ");
    for (i=1;i<=j;i++)
    {
        printf ("%d ", a[i]);
    }
    printf ("Vectorul ale carui elemente sunt elememtele negative din vectorul principal sunt: ");
     for (i=1;i<=k;i++)
    {
        printf ("%d ", b[i]);
    }
}
