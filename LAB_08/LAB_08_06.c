#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char nume[20];
    int nota1, nota2, nota3;
};
struct student studenti;
studenti =malloc(sizeof *studenti *10);

void CeaMaiMareNota1 (int *x)
{
    int nota=0, i, elev[10], j, n;
    n=*x;
    for(i=0;i<n;i++)
    {
        if(studenti[i].nota1>nota)
        {
            nota=studenti[i].nota1;
            j=0;
            elev[j]=i;
        }
        else if(studenti[i].nota1==nota) elev[++j]=i;
    }
    if(j==0) printf ("Elevul cu cea mai mare nota la materia solicitata este %s.", studenti[elev[j]].nume);
    else
    {
        printf ("Elevii ale caror note sunt cele mai mari la materia solicitata sunt: \n");
        for(i=0;i<=j;j++)
        {
            printf ("%s\n", studenti[elev[i]].nume);
        }
    }
}
void CeaMaiMareNota2 (int *x)
{
    int nota=0, i, elev[10], j, n;
    n=*x;
    for(i=0;i<n;i++)
    {
        if(studenti[i].nota2>nota)
        {
            nota=studenti[i].nota2;
            j=0;
            elev[j]=i;
        }
        else if(studenti[i].nota2==nota) elev[++j]=i;
    }
    if(j==0) printf ("Elevul cu cea mai mare nota la materia solicitata este %s.", studenti[elev[j]].nume);
    else
    {
        printf ("Elevii ale caror note sunt cele mai mari la materia solicitata sunt: \n");
        for(i=0;i<=j;j++)
        {
            printf ("%s\n", studenti[elev[i]].nume);
        }
    }
}
void CeaMaiMareNota3 (int *x)
{
    int nota=0, i, elev[10], j, n;
    n=*x;
    for(i=0;i<n;i++)
    {
        if(studenti[i].nota3>nota)
        {
            nota=studenti[i].nota3;
            j=0;
            elev[j]=i;
        }
        else if(studenti[i].nota3==nota) elev[++j]=i;
    }
    if(j==0) printf ("Elevul cu cea mai mare nota la materia solicitata este %s.", studenti[elev[j]].nume);
    else
    {
        printf ("Elevii ale caror note sunt cele mai mari la materia solicitata sunt: \n");
        for(i=0;i<=j;j++)
        {
            printf ("%s\n", studenti[elev[i]].nume);
        }
    }
}

int main()
{
    int i, n, constanta=0, d=0, poz;
    char Nume[20], Materie[10];
    printf ("Sa se citeasca numarul de studenti: ");
    scanf ("%d", &n);
    printf ("Sa se citeasca numele studentilor si notele: ");
    for(i=0;i<n;i++)
    {
        printf ("\n%d.Student: ", i+1);
        fflush(stdin);
        gets(studenti[i].nume);
        fflush(stdin);
        printf ("Mate1: ");
        scanf ("%d", &studenti[i].nota1);
        printf ("Mate2: ");
        scanf ("%d", &studenti[i].nota2);
        printf ("Mecanica: ");
        scanf ("%d", &studenti[i].nota3);
    }

    printf ("\nSa se citeasca numele care se doreste a fi cautat: ");
    fflush(stdin);
    gets (Nume);
    for(i=0;(i<n)&&(constanta==0);i++)
    {
        if (strcmp(Nume, studenti[i].nume)==0)
        {
            constanta=1;
            poz=i;
        }
    }
    if (constanta==1) printf ("Elevul cautat a fost gasit, situatia acestuia fiind: mate1(%d), mate2(%d), mecanica(%d).", studenti[poz].nota1, studenti[poz].nota2, studenti[poz].nota3);
    else printf ("Elevul cautat nu a fost gasit.");

    printf ("\n\nSa se citeasca materia dupa care sa se realizeze ierarhia(mate1, mate2 sau mecanica): ");
    while(d==0)
    {
        gets(Materie);
        fflush(stdin);
        if (strcmp(Materie,"mate1")==0)
        {
            CeaMaiMareNota1(&n);
            d=1;
        }
        else if (strcmp(Materie, "mate2")==0)
        {
            CeaMaiMareNota2(&n);
            d=1;
        }
        else if (strcmp(Materie, "mecanica")==0)
        {
            CeaMaiMareNota3(&n);
            d=1;
        }
        else printf ("Alegeti una dintre materiile sugerate!");
    }
    return 0;
}
