#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100], n, i;
    printf("Sa se citeasca de la tastatura numarul de termeni care se doresc a fi cititi:\n");
    scanf("%d", &n);
    printf ("Cei %d termenii din sirul lui Fibonacci care se doresc a fi afisati sunt: \n", n);
    v[0]=0;
    v[1]=1;
    printf("%d %d ", v[0], v[1]);
    for (i=2;i<n;i++)
    {
        v[i]=v[i-1]+v[i-2];
        printf ("%d ", v[i]);
    }
}
