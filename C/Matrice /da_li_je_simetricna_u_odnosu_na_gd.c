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

void da_li_je_simetricna_u_odnosu_na_gd(int n,int a[n][n])
{
	int indikator=0,i,j,b[n],c[n],s=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i!=j)
				if(a[i][j]!=a[j][i])
				{
					indikator=1;
					break;
				}
	if(indikator==1)
		printf("matrica nije simetricna u odnosu na glavnu dijagonalu");
	else
		printf("matrica je simetricna u odnosu na glavnu dijagonalu");
}

int main()
{
	int n,m;
	unos_n(&n);
	int a[n][n];
	printf("Unesi matricu.\n");
	unos(n,a);
	ispis(n,a);
	da_li_je_simetricna_u_odnosu_na_gd(n,a);
return 0;
}
