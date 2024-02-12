#include <stdio.h>
#include <stdlib.h>

int numar, n;
void palindrom (int n)
{
    int a=0;
    numar=n;
    while (n>0)
    {
        a=n%10+a*10;
        n=n/10;
    }
    if (a==numar) printf ("Numarul %d este palindrom.", numar);
    else printf ("Numarul %d nu este palindrom.", numar);
}


int main()
{
    int n;
    printf ("Sa se citeasca numarul:");
    scanf ("%d", &n);
    palindrom (n);

    return 0;
}
