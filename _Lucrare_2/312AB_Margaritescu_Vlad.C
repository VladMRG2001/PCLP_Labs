//312AB, Margaritescu Vlad

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct meteo
	{
		char localitate[20];
		char judet[20];
		struct
		{
		float temperatura;
		int presiune;
		char stare[10];
		} conditii_meteo;
};

void citire_meteo(struct meteo* date_meteo, int *n)
{
	printf("n=");
	scanf("%d",&*n);
	int i;
	for(i=0;i<*n;i++)
	{
		scanf(date_meteo[i].localitate);
		scanf(date_meteo[i].judet);
		scanf("%f", &date_meteo[i].conditii_meteo.temperatura);
		scanf("%d", &date_meteo[i].conditii_meteo.presiune);
		scanf(date_meteo[i].conditii_meteo.stare);
	}
}

void statii_meteo (struct meteo date_meteo, int n)
{
    char judetul[30];
    char S1[30];
    float T1;
    scanf("%s",judetul);
    scanf("%s",S1);
    scanf("%f",&T1);
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(judetul,date_meteo[i].judet)==0)
            if(date_meteo[i].conditii_meteo.temperatura<T1)
                if(strcmp(S1,date_meteo[i].conditii_meteo.stare)==0)
                    printf("%s",date_meteo[i].localitate);
    }
}

float temperatura_medie(struct meteo date_meteo,int n,char locatie)
{
    float media=0;
    int i,nr=0;
    for(i=0;i<n;i++)
    {
        if(date_meteo[i].localitate==locatie)
        {
            media=media+date_meteo[i].conditii_meteo.temperatura;
            nr++;
        }
    }
    media=media/nr;
    printf("Media este %f", media);
}

int main()
{
	struct meteo date_meteo[100];
	int *n;
	char locatie[30];
	gets(locatie);
	citire_meteo(date_meteo, n);
	statii_meteo(date_meteo, n);
	temperatura_medie(date_meteo, n, locatie);
	return 0;
}
