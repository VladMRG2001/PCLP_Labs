#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void Permutare (char *c)
{
    int fraza;
    fraza=*c;
    if((fraza>='a')&&(fraza<'z')) fraza=fraza+1;
    else if (fraza=='z') fraza='a';
    *c=fraza;
}
int main()
{
    char fraza[30];
    int n, i;
    printf ("Sa se citeasca sirul de caractere:");
    gets(fraza);
    n=strlen(fraza);
    for(i=0;i<n;i++)
    {
        Permutare(&fraza[i]);
    }
    printf ("Sirul modificat este:\n\n%s", fraza);

    return 0;
}
