#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct vector
{
    int numar;
}v[10];



void test_scriere(FILE *fisier)
{ if(fisier==NULL)
     { printf("Fisierul nu poate fi deschis pentru scriere!");
       getch();
       exit(1);
     }
}

void test_citire(FILE *fisier)
{ if(fisier==NULL)
     { puts("Fisierul nu poate fi deschis pentru citire!");
       getch();
	   exit(1);
     }
}

void Citire(int *n)
{
    FILE *f;
    int i, x;
    x=*n;
    printf ("Sa se citeasca elementele vectorului:\n");
    for (i=0;i<x;i++)
    {
        f=fopen("Lab10_1.txt","wt");
        test_scriere(f);
        fwrite(&v[i].numar,sizeof(int),1,f);
    }
    fclose(f);

}
int main()
{
    FILE *f;
    int n, i;
    printf ("Sa se citeasca nr de elemente ale vectorului:");
    scanf("%d", &n);
    Citire (&n);
    f=fopen("Lab10_1.txt","wt");
    printf("\n\nSa se citeasca vectorul:\n");
    for (i=0;i<n;i++)
    {
        fread(&v[i].numar,sizeof(int),1,f);
    }

    return 0;
}
