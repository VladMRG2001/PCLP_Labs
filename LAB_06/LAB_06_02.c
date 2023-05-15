#include <stdio.h>
#include <stdlib.h>

int MaximImpar (int a[], int n)
{
    int m=0, i, j;
    for (j=0;j<n;j++)
    {
        if (a[i]%2!=0)
        {
            for (i=0;i<n;i++)
            {
                if(m<a[i]) m=a[i];
            }
        }
    }
    return m;

}

int main()
{
    int v[10], n, i, maxim;
    printf ("Sa se citeasca numarul de elemente:");
    scanf ("%d", &n);
    printf ("Sa se citeasca elementele vectorului:");
    for (i=0;i<n;i++)
    {
        scanf ("%d", &v[i]);
    }
    maxim=MaximImpar(v, n);

    printf ("Maximul impar dintre elementele vectorului este %d.", maxim);
    return 0;
}
