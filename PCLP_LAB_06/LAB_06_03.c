#include <stdio.h>
#include <stdlib.h>

void Elemente (int a[10], int n, int *p, int *o, int *m)
{
    int i;
    for (i=0;i<n;i++)
    {
        if (a[i]>0) (*p)++;
        else if (a[i]<0) (*o)++;
        else (*m)++;
    }
}

int main()
{
   int n, v[10], i, *pozitiv, *negativ, *nul, x=0, y=0, z=0;
   pozitiv=&x;
   negativ=&y;   //initalizarea pointerilor
   nul=&z;
   printf ("Sa se citeasca numarul de elemente:");
   scanf ("%d", &n);
   printf ("Sa se citeasca elementele vectorului:");
   for (i=0;i<n;i++)
   {
       scanf ("%d", &v[i]);
   }
   Elemente (v, n, pozitiv, negativ, nul);
   printf ("Elementele pozitive sunt in numar de %d.\n", *pozitiv);
   printf ("Elementele negative sunt in numar de %d.\n", *negativ);
   printf ("Elementele nule sunt in numar de %d.", *nul);

   return 0;
}
