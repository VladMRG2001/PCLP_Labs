#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char s[30];
   int n, i, j;
   printf ("Sa se citeasca sirul:\n");
   gets(s);
   n=strlen(s);
   for (i=0;i<n;i++)
   {
       if ((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
           {
               for(j=i;j<n-1;j++)
                {s[j]=s[j+1];}
               n--;
           }
   }
   printf ("Sirul fara vocale va fi:\n\n%s", s);

   return 0;
}
