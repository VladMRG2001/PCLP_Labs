#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[100], n, i, secventa=0, a[100], l=0, c[100], maxim=0, capat1, capat2;
    printf ("Sa se citeasca numarul de elemente care se doresc a fi citite: ");
    scanf ("%d", &n);
    printf ("Sa se citeasca elementele: ");
    for (i=0;i<n;i++)
    {
        scanf ("%d", &vector[i]);
    }

    c[0]=0;
    for (i=0;i<n;i++)
    {
        if (vector[i]+1==vector[i+1]) secventa++;
        else
        {
            a[l++]=secventa;
            c[++l]=i;
            secventa=0;
        }
    }
    for (i=0;i<l;i++)
    {
        if (maxim<a[l])
        {
            maxim=a[l];
            capat1=c[l];
            capat2=c[l+1];
        }
    }
    printf ("Secventa are %d elemente, acestea fiind: ", maxim);
    for (i=capat1;i<=capat2;i++)
    {
        printf ("%d ", vector[i]);
    }

return 0;
}
