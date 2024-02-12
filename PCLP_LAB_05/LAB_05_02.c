#include <stdio.h>
#include <stdlib.h>

void perfect (int n)
{
    int suma=0, divizor=1;
    while (divizor<=n/2)
    {
        if (n%divizor==0) suma=suma+divizor;
        divizor ++;
    }

    if (suma==n) printf ("Numarul %d este perfect.", n);
    else printf ("Numarul %d nu este perfect.", n);
}


int main()
{
   int n;
   printf ("Sa se citeasca numarul:");
   scanf ("%d", &n);
   perfect (n);

   return 0;
}

