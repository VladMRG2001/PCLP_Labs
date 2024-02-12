#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, S=0, i, c, k;
    printf ("Sa se citeasca de la tastatura valoarea lui n: \n");
    scanf ("%d", &n);
    for(i=1;i<=n;i++)
        {
            c=1;
            k=1;
            while (k<=i)
            {
                c=c*k;
                k++;
            }
             S=S+c;
        }
    printf ("Pentru n=%d, suma de la 1! la n! este %d.", n, S);
}
