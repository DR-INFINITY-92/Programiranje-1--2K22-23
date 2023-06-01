#include <stdio.h>
#include <stdlib.h>

void unos_n(int *n)
{
	printf("Unesi koliko vrsta ima matrica.\n");
	scanf("%d",n);
}
void ispis(int n,int m, int a[n][m])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
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
void provera(int n, int c[n],int b[n])
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(c[i]!=b[i])
		{
			j=1;
			break;	
		}
	
	}
	if(j==1)
		printf("Nisu jednaki zbirovi elemenata po vrstama i kolonama.\n");
	else
		printf("Jednaki su svi zbirovi elemenata po vrstama i kolonama.\n");
}
void kreiranje_nizova_zbirova(int n,int a[n][n])
{
	int i,j,b[n],c[n];
	for(i=0;i<n;i++)
	{
		b[i]=0;
		c[i]=0;
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			b[i]=b[i]+a[i][j];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			c[i]=c[i]+a[j][i];
	provera(n,c,b);
}

int main()
{
	int n,m;
	unos_n(&n);
	int a[n][n];
	printf("Unesi matricu.\n");
	unos(n,a);
	kreiranje_nizova_zbirova(n,a);
return 0;
}