#include <stdio.h>
#include <stdlib.h>

void Suma(int *r1, int *r2, int *i1, int *i2)
{
    struct nr_complexe
    {
        int *real, *imaginar;
    };
    struct nr_complexe suma;
    int r, i;
    r=*r1+*r2;
    i=*i1+*i2;
    suma.real=&r;
    suma.imaginar=&i;
    printf ("Suma numerelor complexe este %d+i*%d", *suma.real, *suma.imaginar);
}

void Diferenta(int *r1, int *r2, int *i1, int *i2)
{
    struct nr_complexe
    {
        int *real, *imaginar;
    };
    struct nr_complexe suma;
    int r, i;
    r=*r1-*r2;
    i=*i1-*i2;
    suma.real=&r;
    suma.imaginar=&i;
    if(i<0) printf ("Diferenta numerelor complexe este %d+(i)*%d", *suma.real, *suma.imaginar);
    else printf ("Diferenta numerelor complexe este %d+i*%d", *suma.real, *suma.imaginar);
}

int main()
{
    int r1, r2, i1, i2;
    printf ("Sa se citeasca numarul complex 1 de forma x+i*y:\n");
    scanf ("%d+i*%d", &r1, &i1);
    printf ("Sa se citeasca numarul complex 2 de forma x+i*y:\n");
    scanf ("%d+i*%d", &r2, &i2);
    Suma(&r1, &r2, &i1, &i2);
    Diferenta (&r1, &r2, &i1, &i2);

    return 0;
}
