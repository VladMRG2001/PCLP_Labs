#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf ("Sa se citeasca de la tastatura cifra corespunzatoare zilei care se doreste a fi afisata: ");
    scanf ("%d", &n);
    if (n==1) printf ("E luni.");
    else if (n==2) printf ("E marti.");
    else if (n==3) printf ("E miercuri.");
    else if (n==4) printf ("E joi.");
    else if (n==5) printf ("E vineri.");
    else if (n==6) printf ("E sambata.");
    else if (n==7) printf ("E duminica.");
    else printf ("Eroare!");
}
