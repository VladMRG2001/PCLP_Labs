//312AB, Margaritescu Vlad

#include <stdio.h>
#include <stdlib.h>

int vector(int n, int v[])
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Termenul %d este ", i);
		scanf("%d", &v[i]);
	}
}

int perechi(int n, int v[])
{
	int m;
	printf("Introduceti media: ");
	scanf("%d", &m);
		
	int ok=0;
	
	for(int i=0;i<n;i++)
	{	
		int u=v[i]; int poz1=i; 
    	for(int j=poz1;j<n;j++)
			{
				
				if(v[j]==(2*m-u))
				{
				    int poz2=j;
				    if(poz1!=poz2) 
					{
						printf("perechea cu pozitiile %d - %d\n",i,j);
					}
					ok=1;
				}		
   			}		
	}
	if(ok==0) printf("Nu exista perechi");
}
	
int main()
{
	int n;
	printf("Numarul de termeni ai vectorului este egal cu ");
	scanf("%d", &n);
	int v[n];
	vector(n, v);
	perechi(n, v);
}
