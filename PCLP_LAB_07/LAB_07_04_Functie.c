#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Concatenare (char s1[30], char s2[30])
{
    int i, x, y;
    x=strlen(s1);
    y=strlen(s2);
    for (i=x;i<=x+y;i++)
    {
        s1[i]=s2[i-x];
    }
}
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
    Concatenare(sir1, sir2);
    Concatenare(sir1, sir3);
    printf ("Sirul concatenat este:\n\n %s", sir1);

    return 0;
}
