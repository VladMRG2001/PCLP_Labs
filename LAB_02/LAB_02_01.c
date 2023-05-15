#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf ("Sa se citeasca un caracter:\n" );
    scanf ("%c", &a);
    printf ("Caracterul citit este ");
    if ((a<='Z')&&(a>='A')) printf ("%c si este majuscula. \n", a);
    else if ((a<='z')&&(a>='a')) printf ("%c si este minuscula. \n", a);
    else if ((a<='9')&&(a>='0')) printf ("%c si este cifra. \n", a);
    else printf ("%c si este alt fel de caracter. \n", a);



}
