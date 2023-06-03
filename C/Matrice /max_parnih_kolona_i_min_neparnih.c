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

void max_parnih_kolona_i_min_neparnih(int n,int a[n][n])
{
	int i,j,maxp,minn,b[n/2],c[n/2],br1=0,br2=0;
	for(j=0;j<n;j+=2)
	{
		maxp=a[0][j];
		for(i=0;i<n;i++)
		{
			if(a[i][j]>maxp)
				maxp=a[i][j];
		}
		b[br1]=maxp;
		br1++;
	}
	for(j=1;j<n;j+=2)
	{
		minn=a[0][j];
		for(i=0;i<n;i++)
		{
			if(a[i][j]<minn)
				minn=a[i][j];
		}
		c[br2]=minn;
		br2++;
	}
	printf("\n----------\n");
	for(i=0;i<br1;i++)
		printf("%d ",b[i]);
	printf("\n----------\n");
	for(i=0;i<br2;i++)
		printf("%d ",c[i]);
		
		

}

int main()
{
	int n,m;
	unos_n(&n);
	int a[n][n];
	printf("Unesi matricu.\n");
	unos(n,a);
	ispis(n,a);
	max_parnih_kolona_i_min_neparnih(n,a);
return 0;
}
