#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char zile;
    printf ("Sa se citeasca de la tastatura cifra corespunzatoare zilei care se doreste a fi afisata: ");
    scanf ("%d", &n);
    switch (zile)
    {
    case 'n==1' :printf ("E luni."); break;
    case 'n==2' :printf ("E marti");  break;
    case 'n==3' :printf ("E miercuri."); break;
    case 'n==4' :printf ("E joi."); break;
    case 'n==5' :printf ("E vineri."); break;
    case 'n==6' :printf ("E sambata."); break;
    case 'n==7' :printf ("E duminica."); break;
    default: printf ("Eroare!");
    }
}
