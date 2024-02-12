#include <stdio.h>
#include <stdlib.h>

void Citire (int n, int v[10])
{
   int i;
   printf ("Sa se citeasca elementele vectorului:");
   for (i=0;i<n;i++)
   {
       scanf("%d", &v[i]);
   }
}
void ElementeComune (int v1[10], int v2[10], int n, int m, int vectorcomun[10], int *k)
{
    int i, j, x=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (v1[i]==v2[j])
            {
                vectorcomun[x]=v1[i];
                i++;
                j=0;
                x++;
                *k=x;
            }
        }
    }
}

int main()
{
   int n, m, v1[10], v2[10], vectorcomun[10], k, i;
   printf ("Sa se citeasca numarul de elemente ale primului vector:");
   scanf("%d", &n);
   printf ("Sa se citeasca numarul de elemente ale celui de-al doilea vector:");
   scanf("%d", &m);
   Citire (n,v1);
   Citire (m,v2);
   ElementeComune(v1, v2, n, m, vectorcomun, &k);
   printf ("Elementele vectorului sunt: ");
   for (i=0;i<k;i++)
   {
       printf ("%d ", vectorcomun[i]);
   }

   return 0;
}
