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

void aritmeitcka_sredina_elemenata_ispod_i_na_gd(int n,int a[n][n])
{
	int i,j,b[n],c[n],s=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i>=j)
				s+=a[i][j];
			
	printf("aritmeticka sredina elemenata ispod glavne dijagonale ukljucujuci i dijagonalu je %f",1.0*s/(2*n));
}

int main()
{
	int n,m;
	unos_n(&n);
	int a[n][n];
	printf("Unesi matricu.\n");
	unos(n,a);
	ispis(n,a);
	aritmeitcka_sredina_elemenata_ispod_i_na_gd(n,a);
return 0;
}
