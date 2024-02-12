#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[30];
    int i=0, n, c=0, j=0;
    printf ("Sa se citeasca sirul:");
    gets (s);
    n=strlen(s);
    if((s[0]=='a')||(s[0]=='e')||(s[0]=='i')||(s[0]=='o')||(s[0]=='u'))
    {
        while(s[i]!=' ')
            i++;
        if ((s[i-1]=='a')||(s[i-1]=='e')||(s[i-1]=='i')||(s[i-1]=='o')||(s[i-1]=='u')) c++;
    }
    for(i=i;i<n;i++)
    {
        if(s[i-1]==' ')
        {
            j=i;
            while((s[j]!=' ')&&(s[j]!='.'))
                j++;
            if (((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))&&((s[j-1]=='a')||(s[j-1]=='e')||(s[j-1]=='i')||(s[j-1]=='o')||(s[j-1]=='u'))) c++;
        }
    }
    printf ("Sunt %d cuvinte care incep si se termina cu vocala in sirul dat.", c);

    return 0;
}
