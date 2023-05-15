#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100], m=0, n, i, c[100], k=0, l, j;
    printf ("Sa se citeasca numarul de elemente ale vectorului: ");
    scanf ("%d", &n);
    printf ("Sa se citeasca elementele vectorului: ");
    for (i=0;i<n;i++)
    {
        scanf ("%d", &v[i]);
    }

    for (j=0;j<n;j++)
    {
        l=1;
        for (i=j+1;i<n;i++)
            if (v[j]==v[i]) l++;
        if(m<l)
        {
            m=l;
            c[k++]=v[j];
        }
        else if (m==l)
        {
            c[k++]=v[j];
        }
    }

    if (m==1) printf ("Toate elementele au o unica aparitie.");
    else if (k==1) printf ("Elementul cu cel mai mare numar de aparitii este %d ce are %d aparitii.", c[0], m);
    else {
            printf ("Elementele cu cel mai mare numar de aparitii sunt:\n");
            for (i=0;i<k;i++) printf ("* %d ce are %d aparitii.\n", c[i], m);
    }
return 0;
}
