#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct cuvant
{
    char cuv[15];
    struct cuvant *urmator;
};
typedef struct cuvant CUVANT;
void cuvant (int *n)
{
    CUVANT* cap_lista, *p, *q;
    char fraza[100]="", upper[15]="";
    p=(CUVANT*)malloc(sizeof(CUVANT));
    int x, i=1;
    x=*n;
    printf ("Sa se citeasca cuvintele:\n");
    fflush(stdin);
    gets(p->cuv);
    p->urmator=NULL;
    cap_lista=p;
    for (i=2;i<=x;i++)
    {
        q=(CUVANT*)malloc(sizeof(CUVANT));
        fflush(stdin);
        gets(q->cuv);
        q->urmator=NULL;
        p->urmator=q;
        p=q;
    }
    p=cap_lista;
    strcpy(upper, p->cuv);
    upper[0]=toupper(upper[0]);
    strcpy(p->cuv, upper);
    strcat(fraza, p->cuv);
    p=p->urmator;
    cap_lista=p;
    for(p=cap_lista;p!=NULL;p=p->urmator)
    {
        strcat(fraza," ");
        strcat(fraza, p->cuv);
    }
    strcat(fraza, ".");
    printf("Fraza alcatuita este: %s", fraza);

}
int main()
{
    int n;
    printf ("Sa se citeasca numarul de cuvinte ce se doreste a fi citit:");
    scanf("%d", &n);
    cuvant (&n);
    return 0;
}
