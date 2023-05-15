#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char persoana1[30], persoana2[30];
    int varsta1, varsta2;
    printf ("Cititi numele persoanei 1:");
    gets (persoana1);
    printf ("Cititi numele persoanei 2:");
    gets (persoana2);
    printf ("Cititi varsta persoanei 1:");
    scanf ("%d", &varsta1);
    printf ("Cititi varsta persoanei 2:");
    scanf ("%d", &varsta2);
    if (strcmp(persoana1, persoana2)!=0)
    {
        if (varsta1<varsta2) printf ("%s este mai tanar avand %d ani.", persoana1, varsta1);
        else if (varsta1>varsta2) printf ("%s este mai tanar avand %d ani.", persoana2, varsta2);
        else printf ("%s si %s au aceeasi varsta, aceea de %d.", persoana1, persoana2, varsta1);
    }

return 0;
}
