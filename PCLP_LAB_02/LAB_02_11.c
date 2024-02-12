#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    printf ("Sa se citeasca de la tastatura numarul pana la care sa se afiseze tabla inmultirii: ");
    scanf ("%d", &n);
    printf ("Tabla inmultirii pana la numarul %d inclusiv este: \n", n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf ("%d*%d=%d  ", i, j, i*j);
        printf (" \n");
    }
}
