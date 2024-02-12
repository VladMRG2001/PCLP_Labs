#include <stdio.h>
#include <stdlib.h>

int main()
{
   char sir[30];
   int n, i, c=0;
   printf ("Sa se citeasca numarul de caractere:");
   scanf ("%d", &n);
   printf ("Sa se citeasca caracterele: ");
   for (i=0;i<n;i++)
   {
       scanf ("%c", &sir[i]);
       if (sir[i]!='.') c=1;
       printf ("%c", sir[i]);
   }
return 0;
}
