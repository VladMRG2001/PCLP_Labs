#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k=0, c=1;
    printf ("Sa se citeasca de la tastatura un numar. \n");
    scanf ("%d", &n);
    printf ("Numarul %d ", n);
    while (k<=n/2)
    {
        k++;
        if(n%k==0)c++;
    }
    if (c>2) printf ("nu este prim.");
    else printf ("este prim.");

}
