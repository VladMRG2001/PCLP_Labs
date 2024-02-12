#include <stdio.h>
#include <stdlib.h>

struct studenti
{
    char nume[21];
    int nr_matricol;
    int cod_materie[3];
    float medie_materie[3];
    struct studenti *urmator;
};
typedef struct studenti INFO;
INFO* cap_lista, *p, *q;

void Lista(int *n)
{
    int i=1, x=*n;
    printf ("\nSa se citeasca elementele listei:\n");
    p=(INFO*)malloc (sizeof(INFO));
    printf ("\n%d. Nume: ", i);
    fflush(stdin);
    gets (p->nume);
    printf ("Numar matricol: ");
    scanf ("%d", &p->nr_matricol);
    printf ("Cod materie: ");
    scanf ("%d", &p->cod_materie[i]);
    printf ("Medie: ");
    scanf ("%f", &p->medie_materie[i]);
    cap_lista=p;
    p->urmator=NULL;
    for(i=2;i<=x;i++)
    {
        q=(INFO*)malloc(sizeof(INFO));
        printf ("\n\n%d. Nume: ", i);
        fflush(stdin);
        gets (q->nume);
        printf ("Numar matricol: ");
        scanf ("%d", &q->nr_matricol);
        printf ("Cod materie: ");
        scanf ("%d", &q->cod_materie[i]);
        printf ("Medie: ");
        scanf ("%f", &q->medie_materie[i]);
        q->urmator=NULL;
        p->urmator=q;
        p=q;
    }
    printf("\nCatalogul este acum de forma:\n\n");
    for(p=cap_lista, i=1;p!=NULL;p=p->urmator, i++)
    {
        printf ("%s ; %d ; %d ; %.2f ;\n", p->nume, p->nr_matricol, p->cod_materie[i], p->medie_materie[i]);
    }
}

void Media(int *n)
{
    int i;
    float Media=0;
    for(p=cap_lista, i=1;p!=NULL;p=p->urmator, i++)
    {
        Media=Media+p->medie_materie[i];
        printf ("media e: %f", Media);
    }
    Media=Media/ *n;
    printf ("media e: %f", Media);
    printf ("\nMedia clasei este %.2f.\n\n", Media);
}

void Premiant()
{
    int i, max=0, poz;
    for (p=cap_lista, i=1;p!=NULL; p=p->urmator, i++)
    {
        if(p->medie_materie[i]>max)
        {
            max=p->medie_materie[i];
            poz=i;
        }
    }
    for (p=cap_lista, i=1;p!=NULL; p=p->urmator, i++)
    {
        if (poz==i)
            printf ("Premiantul este %s cu numarul matricol %d si media %.2f.\n", p->nume, p->nr_matricol, p->medie_materie[i]);
    }
}

void Transfer (int *n)
{
    int i=*n+1;
    printf ("\n\nSa se insereze datele elevului transferat:");
    q=(INFO*)malloc(sizeof(INFO));
    printf ("\n\n%d. Nume: ", *n+1);
    fflush(stdin);
    gets (q->nume);
    printf ("Numar matricol: ");
    scanf ("%d", &q->nr_matricol);
    printf ("Cod materie: ");
    scanf ("%d", &q->cod_materie[i]);
    printf ("Medie: ");
    scanf ("%f", &q->medie_materie[i]);
    q->urmator=NULL;
    p=cap_lista;
    while (p!=NULL)
        {
            p=p->urmator;
        }
    p->urmator=q;

    printf("\nCatalogul este acum de forma:\n\n");
    for(p=cap_lista, i=1;p!=NULL;p=p->urmator, i++)
    {
        printf ("%s ; %d ; %d ; %.2f ;\n", p->nume, p->nr_matricol, p->cod_materie[i], p->medie_materie[i]);
    }
    *n=*n+1;
}

int main()
{
    int n;
    printf ("Sa se insereze numarul de studenti din catalog.");
    scanf ("%d", &n);
    Lista(&n);
    Media(&n);
    Premiant();
    Transfer (&n);


    return 0;
}
