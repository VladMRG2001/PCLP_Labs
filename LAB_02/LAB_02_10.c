#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c, i=1, v[100], m;
    printf ("Sa se citeasca un numar de la tastatura: ");
    scanf ("%d", &n);
    printf ("Cifrele numarului %d sunt ", n);
    c=n;
    while (c>0)
    {
        v[i]=c%10;
        c=c/10;
        i++;
    }
    m=i-1;
    printf ("%d", v[m]);
    for (i=m-1;i>1;i--)
    {
        printf (", %d", v[i]);
    }
    printf (" si %d.", v[1]);
}
