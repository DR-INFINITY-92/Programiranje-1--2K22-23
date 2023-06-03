#include <stdio.h>
#include <stdlib.h>

void unos_n(int *n)
{
	printf("Unesi koliko vrsta ima matrica.\n");
	scanf("%d",n);
}
void ispis(int n,int a[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
			printf("\n");
	}
}
void unos(int n,int a[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]==",i,j);
			scanf("%d",&a[i][j]);
		}
}

void odnos_zbireva_iznad_i_ispod_sd(int n,int a[n][n])
{
	int sizsd=0,sissd=0,i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(i+1<n-1)
				sizsd+=a[i][j];
			if(i+j>n-1)
				sissd+=a[i][j];
		}	
	if(sizsd==sissd)
		printf("sume iznad i ispod sporedne dijagonale su jednake");
	else
		if(sizsd<sissd)
			printf("suma elemnata ispod sporedne dijagonale je veca od sume elemenata iznad sporedne dijagonale");
		else
			printf("suma elemnata iznad sporedne dijagonale je veca od sume elemenata ispod sporedne dijagonale");

}

int main()
{
	int n,m;
	unos_n(&n);
	int a[n][n];
	printf("Unesi matricu.\n");
	unos(n,a);
	ispis(n,a);
	odnos_zbireva_iznad_i_ispod_sd(n,a);
return 0;
}
