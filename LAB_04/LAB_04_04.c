#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vector1[100], vector2[100], vectoraux[100], m, n, i, j, constanta;
   printf ("Sa se citeasca numarul de elemente ale primului vector: ");
   scanf ("%d", &n);
   printf ("Sa se citeasca elementele vectorului: ");
   for (i=0;i<n;i++)
   {
       scanf ("%d", &vector1[i]);
   }
   for (i=0;i<n;i++)
   {
       if (vector1[i+1]<vector1[i])
       {
           constanta=vector1[i];
           vector1[i]=vector1[i+1];
           vector1[i+1]=constanta;
           i=-1;
       }
   }

   printf ("Sa se citeasca numarul de elemente ale celui de al doilea vector: ");
   scanf ("%d", &m);
   printf ("Sa se citeasca elementele vectorului: ");
   for (i=0;i<m;i++)
   {
       scanf ("%d", &vector2[i]);
   }
   for (i=0;i<m;i++)
   {
       if (vector2[i+1]<vector2[i])
       {
           constanta=vector2[i];
           vector2[i]=vector2[i+1];
           vector2[i+1]=constanta;
           i=-1;
       }
   }

   i=0;
   j=0;
   constanta=0;
   while ((i<=n)&&(j<=m))
   {
       if ((vector1[i]%2!=0)&&(vector1[i]<vector2[j]))
           {
               vectoraux[constanta++]=vector1[i];
               i++;
           }
        else if (vector1[i]%2==0) i++;
        else if ((vector2[j]%2!=0)&&(vector1[i]>vector2[j]))
            {
                vectoraux[constanta++]=vector2[j];
                j++;
            }
        else if (vector2[j]%2==0) j++;
        else if ((vector1[i]%2!=0)&&(vector1[i]==vector2[j]))
                 {
                     vectoraux[constanta++]=vector1[i];
                     vectoraux[constanta++]=vector2[j];
                     i++;
                     j++;
                 }
   }

   if (i<=n)
   {
       while (i<n)
       {
           if(vector1[i]%2!=0)
           {
               vectoraux[constanta++]=vector1[i];
           }
           i++;
       }
   }
   if (j<=m)
   {
       while (j<m)
       {
           if(vector2[j]%2!=0)
           {
               vectoraux[constanta++]=vector2[j];
           }
           j++;
       }
   }
   printf ("\nSa se afiseze vectorul interclasat: ");
   for (i=0;i<constanta;i++)
   {
       printf ("%d ", vectoraux[i]);
   }


return 0;
}
