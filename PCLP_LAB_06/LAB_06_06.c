#include <stdio.h>
#include <stdlib.h>

void VectorUnic (int n, int v[10], int *k)
{
    int i, j, d;
    d=v[0];
    for (i=0;i<n-*k;i++)
    {
        if(d==v[i])
        {
            for (j=i;j<n;j++)
            {v[j]=v[j+1];}
            (*k)++;
            i--;
        }
    }
}

int main()
{
    int n, v[10], i, *k, x=0;
    k=&x;
    printf ("Sa se citeasca numarul de elemente:");
    scanf ("%d", &n);
    printf ("sa se citeasca elementele vectorului:");
    for(i=0;i<n;i++)
    {
        scanf ("%d", &v[i]);
    }
    VectorUnic(n, v, k);
    printf ("Sa se afiseze vectorul: ");
    for(i=0;i<*k;i++)
    {
        printf ("%d ", v[i]);
    }

    return 0;
}
