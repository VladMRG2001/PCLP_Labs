#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, v[100], i, k, c;
    printf ("Sa se citeasca de la tastatura cate numere vor fi introduse in vector: ");
    scanf ("%d", &n);
    printf ("\nSa se citeasca elementele vectorului:\n");
    for (i=0;i<n;i++)
        scanf ("%d", &v[i]);

    printf ("\nCititi de la tastatura un numar care sa serveasca drept prag: ");
    scanf ("%d", &k);
    for (i=0;i<n;i++)
        if (v[i]>k) printf ("\n%d a depasit pragul si se afla pe pozitia %d.", v[i], i+1);

    printf ("\n\nNumerele de pe pozitiile pare sunt: ");
    printf ("%d", v[1]);
    for (i=2;i<n-2;i++)
        if(i%2!=0) printf (", %d", v[i]);
    if (n%2!=0) printf (" si %d.", v[n-2]);
    else printf (" si %d.", v[n-1]);


    for (i=0;i<n;i++)
    {
        if (v[i]==0)
        {
            for (k=i;k<=n;k++)
                v[k]=v[k+1];
            n--;
            i--;
        }
    }
    printf ("\nVectorul fara elemente nenule este de forma: ");
    for (i=0;i<n;i++)
        printf ("%d ", v[i]);

    printf ("\nVectorul ale carui elemente sunt numerele de divizori ale fiecarui element din vectorul precedent este de forma:\n ");
    for (i=0;i<n;i++)
    {
        c=1;
        for (k=1;k<=v[i]/2;k++)
            {
                if (v[i]%k==0) c++;
            }
        v[i]=c;
        printf ("%d ", v[i]);

    }


}
