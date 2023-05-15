#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persoana
{
    char nume[20];
    int varsta;
    struct persoana *urmator;
};
typedef struct persoana PERS;

void Varsta(int *n)
{
    PERS* cap_lista, *p, *q;
    p=(PERS*)malloc(sizeof(PERS)) ;
    int x, i=1;
    x=*n;
    printf ("\nSa se citeasca numele si varstele: ");
    printf ("\n%d. ", i);
    fflush(stdin);
    gets(p->nume);
    scanf("%d", &p->varsta);
    p->urmator=NULL;
    cap_lista=p;
    for(i=2;i<=x;i++)
    {
        q=(PERS*)malloc(sizeof(PERS));
        printf ("\n%d. ", i);
        fflush(stdin);
        gets(q->nume);
        scanf("%d", &q->varsta);
        q->urmator=NULL;
        p->urmator=q;
        p=q;
    }
    char Nume[20];
    int Varsta;
    printf ("Cititi de la tastatura numele care se doreste a fi cautat: ");
    fflush(stdin);
    gets(Nume);
    printf ("Cititi de la tastatura varsta corespunzatoare persoanei cautate: ");
    scanf ("%d", &Varsta);
    for(p=cap_lista, i=1;p!=NULL;p=p->urmator, i++)
    {
        if(strcmp(Nume, p->nume)==0)
        {
            if(p->varsta==Varsta)
            {
                printf ("A fost gasita persoana cautata pe pozitia %d.", i);
                p=p->urmator;
                if(i<x-1)
                {
                    if (p->varsta<Varsta) printf ("Persoana urmatoare este mai tanara.");
                    else printf ("Persoana urmatoare nu este mai tanara.");
                }
            }
            else printf ("Persoana nu a fost gasita.");
        }
    }
}
int main()
{
    int n;
    printf ("Sa se citesaca numarul de persoane descrise: ");
    scanf ("%d", &n);
    Varsta (&n);

    return 0;
}
