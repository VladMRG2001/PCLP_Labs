#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char sir[30];
   int n, i;
   printf ("Sa se citeasca numarul de caractere:");
   scanf ("%d", &n);
   printf ("Sa se citeasca caracterele: ");
   for (i=0;i<n;i++)
   {
       scanf ("%c", &sir[i]);
   }
   printf ("Numarul de caractere ale sirului este %d.", strlen(sir));
   for (i=0;i<n;i++)
   {
       printf ("%c", sir[i]);
   }
   return 0;
}

