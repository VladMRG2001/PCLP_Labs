#include <stdio.h>
#include <stdlib.h>

int upper (char *a, char *b, char *c)
{
    if ((('a'<=*a)&&(*a<='z'))&&(('a'<=*b)&&(*b<='z'))&&(('a'<=*c)&&(*c<='z')))
    {
        *a=*a-32;
        *b=*b-32;
        *c=*c-32;
        return 1;
    }
    else return 0;}


int main()
{
    char x, y, z;
    printf ("x=");
    scanf ("%c", &x);
    fflush(stdin);
    printf ("y=");
    scanf ("%c", &y);
    fflush(stdin);
    printf ("z=");
    scanf ("%c", &z);
    if( upper (&x, &y, &z)==1) printf ("Caracterele sunt: %c %c %c", x, y, z);
    else printf ("Nu se pot converti.");

    return 0;
}
