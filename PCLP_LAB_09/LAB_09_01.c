#include <stdio.h>
#include <stdlib.h>

struct numere
{
    int valoare;
    struct numere *urmator;
};
typedef struct numere NUMAR;

void NumerePare(int *n)
{
    NUMAR* cap_lista, *p, *q;
    p=(NUMAR*)malloc(sizeof(NUMAR));
    int c=0, x, i=1;
    x=*n;
    printf ("Dati de la tastatura elemente intregi:\n");
    scanf ("%d", &p->valoare);
    p->urmator=NULL;
    cap_lista=p;

    for(i=2;i<=x;i++)
    {
        q=(NUMAR*)malloc(sizeof(NUMAR));
        scanf ("%d", &q->valoare);
        q->urmator=NULL;
        p->urmator=q;
        p=q;
    }
    for(p=cap_lista;(p!=NULL)&&(c==0);p=p->urmator)
       {
        if(p->valoare%2!=0)
            {
                cap_lista=p;
                c=1;
            }
            else free(p);
       }
    q=cap_lista;
    for(p=cap_lista;p!=NULL;p=p->urmator)
       {
           if (p->valoare%2==0)
            {
                if(p->urmator==NULL)
                {
                    p=q;
                    q=p->urmator;
                    p->urmator=NULL;
                    free(q);
                }
                else
                {
                    p=q;
                    q=p->urmator;
                    p->urmator=q->urmator;
                    free(q);
                }
            }
            else q=p;
       }
    printf ("Noua lista este: ");
    for(p=cap_lista;p!=NULL;p=p->urmator)
    {
        printf ("%d ", p->valoare);
    }

}
int main()
{
    int n;
    printf ("Cititi nr de elemente: ");
    scanf ("%d", &n);
    NumerePare(&n);

    return 0;
}
