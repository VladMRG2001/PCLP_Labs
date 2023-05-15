#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produs
{
    int id_produs;
    int cant_produs;
    float pret_produs;
    struct Produs *urmator;
};
typedef struct Produs INFO;
INFO* cap_lista, *cap_cos, *p, *q, *t, *s;

void Lista(int *n)
{
    int c=0;
    *n=1;
    char raspuns;
    printf ("Sa se introduca produsele in evidenta: \n");
    p=(INFO *)malloc(sizeof(INFO));
    printf ("\n%d. Cod produs: ", *n);
    scanf ("%d", &p->id_produs);
    printf("Cantitate: ");
    scanf ("%d", &p->cant_produs);
    printf ("Pret: ");
    scanf ("%f", &p->pret_produs);
    p->urmator=NULL;
    cap_lista=p;
    printf ("Doriti sa continuati?(Y/N) ");
    fflush(stdin);
    scanf("%c", &raspuns);
    if (raspuns=='Y') *n=*n+1;
    else c=1;
    while (c==0)
    {
        q=(INFO *)malloc(sizeof(INFO));
        printf ("\n%d. Cod produs: ", *n);
        scanf ("%d", &q->id_produs);
        printf("Cantitate: ");
        scanf ("%d", &q->cant_produs);
        printf ("Pret: ");
        scanf ("%f", &q->pret_produs);
        q->urmator=NULL;
        p->urmator=q;
        p=q;
        printf ("Doriti sa continuati?(Y/N) ");
        fflush(stdin);
        scanf("%c", &raspuns);
        if (raspuns=='Y') *n=*n+1;
        else c=1;
    }
    printf ("\nIn evidenta se afla %d produse, acestea fiind: \n\n", *n);
    for (p=cap_lista;p!=NULL;p=p->urmator)
    {
       printf ("%d  ; %d  ; %.2f  ;\n", p->id_produs, p->cant_produs, p->pret_produs);
    }
}

void Cos(int *k)
{
    int c=0, z=0, x=1;
    char raspuns;
    printf ("\nSa se introduca produsele in cos: \n");
    t=(INFO *)malloc(sizeof(INFO));
    while (z==0)
    {
        printf ("\n%d. Cod produs: ", x);
        scanf ("%d", &t->id_produs);
        printf("Cantitate: ");
        scanf ("%d", &t->cant_produs);
        for (p=cap_lista; p!=NULL;p=p->urmator)
        {
            if (t->id_produs==p->id_produs)
            {
                t->pret_produs=p->pret_produs;
                z=1;
            }
        }
        if (z==0) printf ("Codul nu corespunde niciunui produs. Introduceti un alt cod. ");
    }
    t->urmator=NULL;
    cap_cos=t;
    printf ("Doriti sa continuati?(Y/N) ");
    fflush(stdin);
    scanf("%c", &raspuns);
    if (raspuns=='Y') x=x+1;
    else c=1;
    while (c==0)
    {
        s=(INFO *)malloc(sizeof(INFO));
        z=0;
        while (z==0)
        {
            printf ("\n%d. Cod produs: ", x);
            scanf ("%d", &s->id_produs);
            printf("Cantitate: ");
            scanf ("%d", &s->cant_produs);
            for (p=cap_lista; (p!=NULL)&&(z==0);p=p->urmator)
            {
                if (s->id_produs==p->id_produs)
                {
                    s->pret_produs=p->pret_produs;
                    z=1;
                }
            }
            for (t=cap_cos;(t!=NULL)&&(z==1);t=t->urmator)
            {
                if (t->id_produs==s->id_produs) t->cant_produs=t->cant_produs+s->cant_produs;
                {
                    z=2;
                    printf ("Produsul era deja in cos. Cantitatea a fost suplimentata.\n");
                }
            }
            if (z==0) printf ("Codul nu corespunde niciunui produs. Introduceti un alt cod. \n");
        }
        s->urmator=NULL;
        t->urmator=q;
        t=q;
        printf ("Doriti sa continuati?(Y/N) ");
        fflush(stdin);
        scanf("%c", &raspuns);
        if (raspuns=='Y') x=x+1;
        else c=1;
    }
    printf ("In cos se afla %d produse, acestea fiind: \n\n", x);
    for (t=cap_lista;t!=NULL;t=t->urmator)
    {
       printf ("%d  ; %d  ; %.2f  ;\n", t->id_produs, t->cant_produs, t->pret_produs);
    }
    *k=x;
}

void Adaugare(INFO *n, INFO *m)
{
    m->urmator=n->urmator;
    n->urmator=m;
}

void Eliminare(INFO *n, INFO *m)
{
    m=n->urmator;
    n->urmator=n->urmator->urmator;
    free(m);

}

void CostFinal()
{
    float Total=0;
    for (t=cap_cos;t!=NULL;t=t->urmator)
    {
        Total=Total+t->pret_produs*t->cant_produs;
    }
    printf ("\nCosul de cumparaturi este in valoare de %.2f RON.", Total);
}

int main()
{
    int n, id, produse, z=0;
    char raspuns;
    Lista(&n);
    Cos(&produse);
    CostFinal();
    printf("Doriti sa mai modificati cosul in vreun fel? (E(liminare)/A(daugare)): ");
    fflush(stdin);
    scanf ("%c", &raspuns);
    if (raspuns=='E')
    {
        printf ("Introduceti id-ul produsului care se doreste a fi eliminat: ");
        scanf ("%d", &id);
        for (t=cap_cos;t!=NULL;t=t->urmator)
        {
            if (t->id_produs==id)
            {
                if(t==cap_cos)
                {
                    t=t->urmator;
                    cap_cos=t;
                }
                else Eliminare(s, t);
            }
            else s=t;
        }
    }
    else if (raspuns=='A')
    {
        produse++;
        printf ("Introduceti datele produsului care se doreste a fi adaugat: ");
        printf ("\n%d. Cod produs: ", produse);
        scanf ("%d", &s->id_produs);
        printf("Cantitate: ");
        scanf ("%d", &s->cant_produs);
        for (p=cap_lista; (p!=NULL)&&(z==0);p=p->urmator)
            {
                if (s->id_produs==p->id_produs)
                {
                    s->pret_produs=p->pret_produs;
                    z=1;
                }
            }
        t=cap_cos;
        while (t!=NULL)
        {
            t=t->urmator;
        }
        Adaugare(s, t);
    }

    return 0;
}
