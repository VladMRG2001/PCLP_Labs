#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf ("Sa se citeasca de la tastatura 3 numere intregi:\n");
    scanf ("%d %d %d", &a, &b, &c);
    if ((a+b>c)||(a+c>b)||(b+c>a))
        {
            printf ("Numerele alese pot fi laturile unui triunghi. Mai exact, triunghiul format este ");
            if((a*a+b*b==c*c)||(c*c+b*b==a*a)||(a*a+c*c==b*b)) printf ("dreptunghic.");
            else if ((a==b)&&(b==c)&&(a==c)) printf ("echilateral.");
            else if (((a==b)&&(a!=c))||((b==c)&&(b!=a))||((a==c)&&(c!=b))) printf ("isoscel.");
            else printf ("oarecare.");
        }

    else printf ("Numerele alese nu pot fi laturile unui triunghi.");

}
