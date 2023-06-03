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
void unos_niza(int n,int k[n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("k[%d]=",i);
		scanf("%d",&k[i]);
	}
}
void ciklicna_permutacija(int n,int a[n][n])
{
	int i,j,b[n];
	
	unos_niza(n,b);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(i==0)
				a[i][j]=b[j];
			else
			{
				if(j<n-1)
					a[i][j]=a[i-1][j+1];
				else
					if(j==n-1)
						a[i][j]=a[i-1][0];
			}
			
		}
}

int main()
{
	int n,m;
	unos_n(&n);
	int a[n][n];
	ciklicna_permutacija(n,a);
	ispis(n,a);
return 0;
}
