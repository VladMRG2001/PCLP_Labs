#include <stdio.h>
#include <stdlib.h>

void valori (int a, int b, int c)
{
    if ((a<b)&&(b<c)) printf ("C");
    else if ((a>b)&&(b>c)) printf ("D");
    else if ((a==b)&&(b==c)) printf ("I");
    else printf ("N");
}


int main()
{
   int a, b, c;
   printf ("Prima valoare:");
   scanf ("%d", &a);
   printf ("A doua valoare:");
   scanf ("%d", &b);
   printf ("A treia valoare:");
   scanf ("%d", &c);
   valori (a, b, c);

   return 0;
}
