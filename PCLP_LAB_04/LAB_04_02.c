#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vector[100], n, i, medie=0, c=0, minim=999;
   printf ("Sa se citeasca de la tastatura numarul de elemente: ");
   scanf ("%d", &n);
   printf ("Sa se citeasca elementele: ");
   for (i=0;i<n;i++)
   {
       scanf ("%d", &vector[i]);
       medie=medie+vector[i];
   }
   medie=medie/n;
   i=0;
   do {
   if(vector[i]==medie) c=1;
   i++ ;
   } while((i<n)&&(c==0));

   if (c==1) printf ("Valoarea mediei apartine vectorului. \n");
   else if (c==0) printf ("Valoarea mediei nu apartine vectorului. \n");

   for (i=0;i<n;i++)
   {
       if(minim>vector[i]) minim=vector[i];
   }
   printf ("Minimul este %d si se afla pe pozitia/pozitiile: ", minim);
   for (i=0;i<n;i++)
   {
       if(minim==vector[i]) printf ("%d; ", i);
   }

   return 0;

}
