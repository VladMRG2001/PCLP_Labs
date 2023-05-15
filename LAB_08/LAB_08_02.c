#include <stdio.h>
#include <stdlib.h>

void Momente (int *xo, int *yo, int *xm, int *ym, int *xs, int *ys)
{
    struct Timp
    {
        int *ora, *minut, *secunda;
    };
    struct Timp Moment;
    int mom_ora, mom_minut, mom_secunda;
    mom_ora=*xo+*yo;
    mom_minut=*xm+*ym;
    mom_secunda=*xs+*ys;
    Moment.ora=&mom_ora;
    Moment.minut=&mom_minut;
    Moment.secunda=&mom_secunda;
    while (mom_secunda>60)
        {
            mom_secunda=mom_secunda-60;
            mom_minut++;
        }

    while (mom_minut>60)
        {
            mom_minut=mom_minut-60;
            mom_ora++;
        }
    printf ("\n\n");
    if ((mom_minut<10)&&(mom_ora<10)&&(mom_secunda<10))
        printf ("Momentul rezultat al zilei este la 0%d:0%d:0%d", *Moment.ora, *Moment.minut, *Moment.secunda);
    else if ((mom_minut<10)&&(mom_ora<10)&&(mom_secunda>9))
         printf ("Momentul rezultat al zilei este la 0%d:0%d:%d", *Moment.ora, *Moment.minut, *Moment.secunda);
    else if ((mom_minut<10)&&(mom_ora>9)&&(mom_secunda<10))
         printf ("Momentul rezultat al zilei este la %d:0%d:0%d", *Moment.ora, *Moment.minut, *Moment.secunda);
    else if ((mom_minut>9)&&(mom_ora<10)&&(mom_secunda<10))
         printf ("Momentul rezultat al zilei este la 0%d:%d:0%d", *Moment.ora, *Moment.minut, *Moment.secunda);
    else if ((mom_minut>9)&&(mom_ora<10)&&(mom_secunda>9))
         printf ("Momentul rezultat al zilei este la 0%d:%d:%d", *Moment.ora, *Moment.minut, *Moment.secunda);
    else if ((mom_minut<10)&&(mom_ora>9)&&(mom_secunda>9))
         printf ("Momentul rezultat al zilei este la %d:0%d:%d", *Moment.ora, *Moment.minut, *Moment.secunda);
    else if ((mom_minut>9)&&(mom_ora>9)&&(mom_secunda<10))
         printf ("Momentul rezultat al zilei este la %d:%d:0%d", *Moment.ora, *Moment.minut, *Moment.secunda);
    else printf ("Momentul rezultat al zilei este la %d:%d:%d", *Moment.ora, *Moment.minut, *Moment.secunda);

}

int main()
{
    int mom1_ora, mom1_minut, mom1_secunda, mom2_ora, mom2_minut, mom2_secunda;
    printf ("Sa se citeasca primul moment al zilei:\nora1=");
    scanf("%d", &mom1_ora);
    printf ("minut1=");
    scanf ("%d", &mom1_minut);
    printf ("secunda1=");
    scanf ("%d", &mom1_secunda);
    printf ("Sa se citeasca al doilea moment al zilei:\nora2=");
    scanf("%d", &mom2_ora);
    printf ("minut2=");
    scanf ("%d", &mom2_minut);
    printf ("secunda2=");
    scanf ("%d", &mom2_secunda);
    Momente (&mom1_ora, &mom2_ora, &mom1_minut, &mom2_minut, &mom1_secunda, &mom2_secunda);

    return 0;
}
