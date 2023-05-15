#include <stdio.h>
#include <stdlib.h>

void Moment()
{
    printf ("Sa se citeasca un moment al zilei:");
    int c=0;
    struct timp
    {
        int ora, minut, secunda;
    };
    struct data
    {
        int zi, luna, an;
        struct timp moment;
    };
    struct data eveniment;
    printf("\nZi: ");
    scanf ("%d", &eveniment.zi);
    printf("Luna: ");
    scanf ("%d", &eveniment.luna);
    printf ("An: ");
    scanf ("%d", &eveniment.an);
    printf ("Ora: ");
    scanf ("%d", &eveniment.moment.ora);
    printf ("Minut: ");
    scanf ("%d", &eveniment.moment.minut);
    printf ("Secunda: ");
    scanf ("%d", &eveniment.moment.secunda);

    while (eveniment.moment.secunda>59)
    {
        eveniment.moment.minut=eveniment.moment.minut+1;
        eveniment.moment.secunda=eveniment.moment.secunda-60;
    }
    while(eveniment.moment.minut>59)
    {
        eveniment.moment.minut=eveniment.moment.minut-60;
        eveniment.moment.ora=eveniment.moment.ora+1;
    }
    while(eveniment.moment.ora>23)
    {
        eveniment.zi=eveniment.zi+1;
        eveniment.moment.ora=eveniment.moment.ora-24;
    }
    while((eveniment.zi>28)&&(c!=1))
    {
        c=0;
        if(eveniment.luna==2)
        {
            if(eveniment.zi>28)
            {
                eveniment.luna=eveniment.luna+1;
                eveniment.zi=eveniment.zi-28;
            }
            else c++;
        }

        if ((eveniment.luna==1)||(eveniment.luna==3)||(eveniment.luna==5)||(eveniment.luna==7)||(eveniment.luna==8)||(eveniment.luna==10)||(eveniment.luna==12))
        {
            if(eveniment.zi>31)
            {
                eveniment.luna=eveniment.luna+1;
                eveniment.zi=eveniment.zi-31;
            }
            else c++;
        }

        if ((eveniment.luna==4)||(eveniment.luna==6)||(eveniment.luna==9)||(eveniment.luna==11))
        {
            if(eveniment.zi>30)
            {
                eveniment.luna++;
                eveniment.zi=eveniment.zi-30;
            }
            else c++;
        }
    }
    while(eveniment.luna>12)
    {
        eveniment.an++;
        eveniment.luna=eveniment.luna-12;
    }
    printf ("Momentul zilei este in data de %d.%d.%d la ora %d.%d.%d.", eveniment.zi, eveniment.luna, eveniment.an, eveniment.moment.ora, eveniment.moment.minut, eveniment.moment.secunda);
}
int main()
{
    Moment();

    return 0;
}
