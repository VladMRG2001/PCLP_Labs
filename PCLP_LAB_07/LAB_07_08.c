#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void Sufix (int *y, int *cuv, char s1[30], char s2[30])
{
    char c1, c2;
    int i, n, m, c=0, x;
    if(strlen(s1)>strlen(s2))
    {
        x=2;
        n=strlen(s1);
        m=strlen(s1)-strlen(s2);
        for (i=n-1;(i>=m)&&(c==0);i--)
        {
            c1=s1[i-m];
            c2=s2[i];
            if (c1!=c2) c=1;
        }
    }
    else if (strlen(s1)<strlen(s2))
    {
        x=1;
        n=strlen(s2);
        m=strlen(s2)-strlen(s1);
        for (i=n-1;(i>=m)&&(c==0);i--)
        {
            c1=s1[i-m];
            c2=s2[i];
            if (c1!=c2) c=1;
        }
    }
    *y=*y+c;
    *cuv=x;
}
int main()
{
    char cuvant1[30], cuvant2[30];
    int y=0, nr;
    printf ("Sa se citeasca cuvintele:\n1.  ");
    gets(cuvant1);
    printf ("2.  ");
    gets(cuvant2);
    Sufix (&y, &nr, cuvant1, cuvant2);
    if (y==0) printf ("Cuvantul %s este sufix cuvantului %s.", cuvant1, cuvant2);
    else if(y==1)
    {
        Sufix (&y, &nr, cuvant2, cuvant1);
        if (y==1) printf ("Cuvantul %s este sufix cuvantului %s.", cuvant2, cuvant1);
        else if(y==2) printf ("Niciunul nu este sufix pentru niciunul.");
    }

    return 0;
}
