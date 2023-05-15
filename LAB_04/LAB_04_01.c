#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[100], i, n, c=0, k;
    printf ("Sa se citeasca numarul de numere din care se doreste a fi format sirul: ");
    scanf ("%d", &n);
    printf ("Sa se citeasca elementele vectorului: ");
    for (i=0;i<n;i++)
    {
        scanf ("%d", &vector[i]);
    }
    for (i=0;(i<n-1)&&(c==0);i++)
    {
       if(vector[i+1]>vector[i]) c=0;
       else c++;
    }
    if(c==0)
    {
        printf ("Sirul este crescator.");
        k=1;
    }

    c=0;
    for (i=0;(i<n-1)&&(c==0);i++)
    {
       if(vector[i+1]<vector[i]) c=0;
       else c++;
    }
    if(c==0)
    {
        printf ("Sirul este descrescator.");
        k=1;
    }

    c=0;
    for (i=0;(i<n-1)&&(c==0);i++)
    {
       if(vector[i+1]==vector[i]) c=0;
       else c++;
    }
    if(c==0)
    {
        printf ("Sirul este constant.");
        k=1;
    }
    if (k!=1) printf ("Sirul este oarecare.");

    return 0;
}
