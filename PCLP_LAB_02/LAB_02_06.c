#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, S1=0, S2=0;
    do
    {printf("Sa se citeasca o valoare numerica de la tastatura:\n");
    scanf("%d", &n);
    if (n<0) S1++;
    else if (n>0) S2++;
    }while (n!=0);
    printf ("Au fost citite %d valori negative si %d valori pozitive.", S1, S2);

}
