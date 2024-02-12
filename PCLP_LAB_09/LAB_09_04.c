#include <stdio.h>
#include <stdlib.h>

struct Numere
{
    int elem;
    struct Numere *urm;
};
typedef struct Numere NUMAR;
NUMAR* cap_lista, *p, *q, *t;

void Citire(int *n)
{
    int i, x;
    x=*n;
    printf("Sa se citeasca elementele:\n");
    p=(NUMAR*)malloc(sizeof(NUMAR));
    scanf("%d", &p->elem);
    p->urm=NULL;
    cap_lista=p;
    for (i=2;i<=x;i++)
    {
        q=(NUMAR*)malloc(sizeof(NUMAR));
        scanf("%d", &q->elem);
        q->urm=NULL;
        p->urm=q;
        p=q;
    }
    printf("\nLista este acum de forma:");
    for(p=cap_lista;p!=NULL;p=p->urm)
    {
        printf ("%d ", p->elem);
    }
}
void Cautare(int *n)
{
    int i;
    printf ("\n\nSe cauta in lista valoarea 6.");
    for (p=cap_lista;p!=NULL;p=p->urm)
    {
        if(p->elem==6)
        {
            printf ("\nS-a gasit elementul cautat in lista.");
            if(p==cap_lista) printf ("\nElementul se afla pe prima pozitie.");
            else
            {
                printf("\nElementul nu se afla pe prima pozitie, asadar va fi eliminat din lista.");
                p=q;
                q=p->urm;
                p->urm=q->urm;
                free(q);
            }
        }
        q=p;
    }
    printf("\nLista este acum de forma:");
    for(p=cap_lista, i=1;p!=NULL;p=p->urm, i++)
    {
        printf ("%d ", p->elem);
    }
    *n=i;
}
void Inserare(int *n, NUMAR *z, NUMAR *nou)
{
    nou->urm=z->urm;
    z->urm=nou;
}
int main()
{
    int n;
    printf ("Sa se citeasca cate elemente numere intregi vor fi inserate in lista: ");
    scanf("%d", &n);
    Citire(&n);
    Cautare(&n);
    printf("\n\nEnunt: Sa se insereze un element pe pozitia nr. 3.");

    printf("\n\nSa se insereze un element pe pozitia y: ");
    int i, y, c=0;
    t=(NUMAR*)malloc(sizeof(NUMAR));
    scanf("%d", &t->elem);
    t->urm=NULL;
    printf("Sa se citeasca pozitia pe care se insereaza elementul: ");
    scanf("%d", &y);
    for(p=cap_lista, i=1;(p!=NULL)&&(c==0);p=p->urm, i++)
    {
        if (i==y-1)
        {
            Inserare(&n, p, t);
            c=1;
        }
    }
    printf("\nLista este acum de forma:");
    for(p=cap_lista, i=1;p!=NULL;p=p->urm, i++)
    {
        printf ("%d ", p->elem);
    }
    n=i;

    printf ("\n\na) Sa se insereze un element pe prima pozitie.");
    printf ("\nSa se citeasca elementul: ");
    q=(NUMAR*)malloc(sizeof(NUMAR));
    p=cap_lista;
    scanf("%d", &q->elem);
    q->urm=p;
    cap_lista=q;
    printf("\nLista este acum de forma:");
    for(p=cap_lista, i=1;p!=NULL;p=p->urm, i++)
    {
        printf ("%d ", p->elem);
    }
    n=i;

    printf("\n\nb)Sa se insereze un element dupa cel de-al patrulea element.");
    printf("\n\nSa se insereze un element pe pozitia y: ");
    t=(NUMAR*)malloc(sizeof(NUMAR));
    scanf("%d", &t->elem);
    t->urm=NULL;
    printf("Sa se citeasca pozitia dupa care se insereaza elementul: ");
    scanf("%d", &y);
    c=0;
    for(p=cap_lista, i=1;(p!=NULL)&&(c==0);p=p->urm, i++)
    {
        if (i==y)
        {
            Inserare(&n, p, t);
            c=1;
        }
    }
    printf("\nLista este acum de forma:");
    for(p=cap_lista, i=1;p!=NULL;p=p->urm, i++)
    {
        printf ("%d ", p->elem);
    }
    n=i;

    c=0;
    y=14;
    printf ("\n\nc)Sa se insereze un element dupa valoarea 14, daca aceasta exista in lista.");
    for(p=cap_lista;(p!=NULL)&&(c==0);p=p->urm)
    {
        if (p->elem==y)
        {
            printf("\nValoarea a fost gasita. Sa se insereze un element pe pozitia urmatoare: ");
            t=(NUMAR*)malloc(sizeof(NUMAR));
            scanf("%d", &t->elem);
            t->urm=NULL;
            Inserare(&n, p, t);
            c=1;
        }
    }
    if (c==0) printf ("\nValoarea nu a fost gasita in lista.");
    printf("\nLista este acum de forma:");
    for(p=cap_lista, i=1;p!=NULL;p=p->urm, i++)
    {
        printf ("%d ", p->elem);
    }
    n=i;

    printf ("\n\nd)Sa se insereze un element inaintea valorii 14, daca aceasta exista in lista.");
    c=0;
    for(p=cap_lista;(p!=NULL)&&(c==0);p=p->urm)
    {
        if (p->elem==y)
        {
            if(p==cap_lista)
            {
                printf("\n\nValoarea a fost gasita. Sa se insereze un element pe pozitia anterioara: ");
                t=(NUMAR*)malloc(sizeof(NUMAR));
                scanf("%d", &t->elem);
                t->urm=p;
                cap_lista=t;
            }
            else
            {
                printf("\n\nValoarea a fost gasita. Sa se insereze un element pe pozitia anterioara: ");
                t=(NUMAR*)malloc(sizeof(NUMAR));
                scanf("%d", &t->elem);
                t->urm=NULL;
                p=q;
                Inserare(&n, p, t);
            }
            c=1;
        }
        q=p;
    }
    if (c==0) printf ("\nValoarea nu a fost gasita in lista.");
    printf("\nLista este acum de forma:");
    for(p=cap_lista, i=1;p!=NULL;p=p->urm, i++)
    {
        printf ("%d ", p->elem);
    }
    n=i;

    return 0;
}
