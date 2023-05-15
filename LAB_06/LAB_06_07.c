#include <stdio.h>
#include <stdlib.h>

void Separare (int v[10], int pare[10], int impare[10], int n, int *n1, int *n2)
{
    int i, j=0, k=0;
    for (i=0;i<n;i++)
    {
        if (v[i]%2==0)
        {
            pare[j]=v[i];
            j++;
            *n1=j;
        }
        else
        {
            impare[k]=v[i];
            k++;
            *n2=k;
        }
    }
}

int main()
{
    int n, v[10], i, pare[10], impare[10], n1, n2;
    printf ("Sa se citeasca numarul de elemente:");
    scanf ("%d", &n);
    printf ("Sa se citeasca elementele:");
    for (i=0;i<n;i++)
    {
        scanf ("%d", &v[i]);
    }
    Separare(v, pare, impare, n, &n1, &n2);
    printf ("\nVectorul ce contine elementele pare ale vectorului principal este:");
    for (i=0;i<n1;i++)
    {
        printf ("%d ", pare[i]);
    }
    printf ("\nVectorul ce contine elementele impare ale vectorului principal este:");
    for (i=0;i<n2;i++)
    {
        printf ("%d ", impare[i]);
    }
    return 0;
}
