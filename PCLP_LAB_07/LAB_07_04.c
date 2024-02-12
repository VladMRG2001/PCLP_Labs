#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sir1[30], sir2[30], sir3[30];
    printf ("Sa se citeasca sirurile:\n");
    printf ("1. ");
    gets(sir1);
    printf ("2. ");
    gets(sir2);
    printf ("3. ");
    gets(sir3);
    strcat(sir1, sir2);
    strcat (sir1, sir3);
    printf ("Sirul concatenat este:\n\n %s", sir1);

    return 0;
}
