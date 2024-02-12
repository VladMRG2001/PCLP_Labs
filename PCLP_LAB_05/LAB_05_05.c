#include <stdio.h>
#include <stdlib.h>

int CateCifre (int numar)
{
    int d, cifre=0;
    d=numar;
    while (d>0)
    {
        cifre++;
        d=d/10;
    }
    return printf ("Numarul are %d cifre.\n", cifre);
}

int AfisareCifre (int numar)
{
    int d, i=0;
    int *cifre;
    d=numar;
    printf( "Numarul are cifrele:");
    while (d>0)
    {
        i=d%10;
        cifre=&i;
        d=d/10;
        printf ("%d ", &cifre);
    }
    return 0;
}

int main()
{
   int x;
   printf ("Cititi numarul:");
   scanf ("%d", &x);
   CateCifre (x);
   AfisareCifre (x);

   return 0;
}
