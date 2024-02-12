#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Sa se citeasca de la tastatura un numar intreg: ");
    scanf ("%d", &n);
    printf("Numerele pare mai mici decat numarul %d sunt: ", n);
    for (i=1;i<n;i++)
    if (i%2==0) printf ("\n%d", i);
}
