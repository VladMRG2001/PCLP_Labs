#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CantitateMax (int n)
{
    struct informatie
    {
        char firma[30], produs[30];
        int cantitate;
    };
    int i;
    struct informatie *v;
    v=malloc(10*sizeof(struct informatie));
    char prod[30];
    for (i=0;i<n;i++)
    {
        fflush(stdin);
        printf ("%d. Firma : ", i+1);
        gets(v[i].firma);
        fflush(stdin);
        printf ("Produs : ");
        gets(v[i].produs);
        fflush(stdin);
        printf ("Cantitate :");
        scanf ("%d", &v[i].cantitate);
    }

    int max=0, poz, cant;
    printf ("\nCititi numele produsului in functie de care se face ierarhizarea: ");
    fflush(stdin);
    gets (prod);
    for (i=0;i<n;i++)
    {
        if(strcmp(prod, v[i].produs)==0)
        {
            cant=v[i].cantitate;
            if (cant>max)
            {
                max=cant;
                poz=i;
            }
        }
    }
    printf ("Firma care realizeaza cea mai mare cantitate dintr-un anumit produs este %s.", v[poz].firma);
    printf ("\n\nCititi de la tastatura produsul a carui cantitate totala se vrea a fi calculata: ");
    fflush(stdin);
    gets(prod);
    max=0;
    for (i=0;i<n;i++)
    {
        if(strcmp(prod, v[i].produs)==0) max=max+v[i].cantitate;
    }
    printf ("Produsul %s a fost gasit in cantitate de %d.", prod, max);
}

int main()
{
    int n;
    printf ("Sa se citeasca numarul de produse:");
    scanf ("%d", &n);
    CantitateMax (n);

return 0;
}
