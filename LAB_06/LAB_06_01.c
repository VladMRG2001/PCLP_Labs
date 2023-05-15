#include <stdio.h>
#include <stdlib.h>

int Perechi ( int b,int a[])
{
    int i, c;
    for (i=0; i<b-1;i++)
    {
       if (a[i]==a[i+1]) c++;
    }
    return c;
}


int main()
{
    int n, v[8], i, numarperechi;
    printf ("sa se citeasca numarul de elemente ale vectorului(maxim 8):");
    scanf ("%d", &n);
    printf ("Sa se citeasca elementele vectorului:");
    for (i=0;i<n;i++)
    {
        scanf ("%d", &v[i]);
    }
    numarperechi=Perechi ( n, v);

    printf ("Numarul de perechi de numere consecutive este %d.", numarperechi);
    return 0;
}
