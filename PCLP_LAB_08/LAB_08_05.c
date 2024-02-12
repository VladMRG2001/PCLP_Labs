#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct fig_geom
{
    char nume[10];
    int raza;
    int lungime;
    int latime;
};
struct fig_geom figura;
void Cerc ()
{
    printf ("\nSa se citeasca dimensiunile:\nRaza:");
    scanf ("%d", &figura.raza);
    float arie, perimetru;
    arie=figura.raza * figura.raza * M_PI;
    perimetru=2 * figura.raza * M_PI;
    printf ("\nAria cercului este %f si perimetrul este %f.", arie, perimetru);
}
void Patrat ()
{
    printf ("\nSa se citeasca dimensiunile:\nLungime:");
    scanf ("%d", &figura.lungime);
    int arie, perimetru;
    arie=figura.lungime * figura.lungime;
    perimetru=4 * figura.lungime;
    printf ("\nAria patratului este %d si perimetrul este %d.", arie, perimetru);
}
void Dreptunghi ()
{
    printf ("\nSa se citeasca dimensiunile:\nLungime:");
    scanf ("%d", &figura.lungime);
    printf ("Latime:");
    scanf ("%d", &figura.latime);
    int arie, perimetru;
    arie=figura.latime*figura.lungime;
    perimetru=2*figura.latime+2*figura.lungime;
    printf ("\nAria dreptunghiului este %d si perimetrul este %d.", arie, perimetru);
}

int main()
{
    float arie=0, perimetru=0;

    printf ("Inserati initiala corespunzatoare formei geometrice dorite (cerc, patrat sau dreptunghi):");
    gets (figura.nume);
    if (strcmp(figura.nume,"c")==0) Cerc (&arie, &perimetru);
    else if (strcmp(figura.nume,"p")==0) Patrat (&arie, &perimetru);
    else if (strcmp(figura.nume,"d")==0) Dreptunghi (&arie, &perimetru);

    return 0;
}
