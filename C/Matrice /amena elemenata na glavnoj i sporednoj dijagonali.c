#include <stdio.h>
#include <stdlib.h>

void unos_n(int *n)
{
	printf("Unesi dimenziju matrice.\n");
	scanf("%d",n);
}
void ispis(int n, int a[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
				printf("%d\t",a[i][j]);
		printf("\n");
	}
}
void unos(int n, int a[n][n])
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]==",i,j);
			scanf("%d",&a[i][j]);
		}
}
void matrix_transform(int n, int a[n][n])
{
	int i,j,sd[n],gd[n],t;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(i==j)
			gd[i]=a[i][j];
		if(i+j==n-1)
			sd[i]=a[i][j];
	}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(i==j)
			a[i][j]=sd[i];
		if(i+j==n-1)
			a[i][j]=gd[i];
	}
	printf("==============matrica posle transformacije===========\n");
	ispis(n,a);
}
int main()
{
	int n;
	unos_n(&n);
	int a[n][n];
	unos(n,a);
	printf("matrica pre tranformacije\n");
	ispis(n,a);
	matrix_transform(n,a);
return 0;
}