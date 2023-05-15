//312 AB, Margaritescu Vlad

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct persoana
{
    char nume[20];
    int varsta;
    char verificare[20];
}persoana;

typedef struct valori
{
    int n;
    int z[100];
}valori;

int functie(valori *v, int n)
{
    int maxim=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<i;j++)
        {
            if(v[i].z[j]<maxim)
            maxim = v[i].z[j];
        }
    if(maxim<0)
    {
        maxim = (-1)*maxim;
        return maxim;
    }
    else if(maxim>=0) return 0;
}
int main()
{
    FILE *ft, *fb;
    persoana p[100];
    int nr_pers=0, n, j, i=0, k=0;
    int tablou[20][20];
    int componenta =0;
    valori v[100];

    char fisier_text[20];
    printf("numele fisierului text: ");
    scanf("%s", fisier_text);
    ft = fopen(fisier_text,"rt");
    while(fscanf(ft,"%d",&v[i].n)) i=i+1;
    n=i;

    for(i=0;i<n;i++)
    for(j=0;j<i;j++)
    {
        fscanf(ft,"%d",&v[i].z[j]);
        tablou [i][j]=v[i].z[j];
    }

    functie(v,n);
    fclose(ft);

    char fisier_binar[20];
    printf("numele fisierului binar: ");
    scanf("%s", fisier_binar);
    fb=fopen(fisier_binar, "rb");
    while(fread(&p[k],sizeof(persoana),1,fb)) k=k+1;
    nr_pers=k;

    for(i=0;i<k;i++)
        if(i==functie(v,n)) componenta = i;

    if(p[functie(v,n)].varsta > 18 && strcmp(p[functie(v,n)].nume,"in")==0) strcpy(p[k].verificare,"verificat");
    fwrite(&p[k].verificare,sizeof(p->verificare),1,fb);
    fclose(fb);
}
