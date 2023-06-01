#include <stdio.h>
#include <stdlib.h>
void unesi_matricu(int n,int a[n][n])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
}
int max_suma(int n,int a[n][n])
{
	int i,j,b[n];
	for(i=0;i<n;i++)
		b[i]=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			b[i]=b[i]+a[j][i];
	int maxj=0;
	for(j=0;j<n-1;j++)
		if(b[j+1]>b[j])
			maxj=j+1;
	printf("elementi kolone sa najvecom sumom su:\n");
	for(i=0;i<n;i++)
		printf("%d",a[i][maxj]);
}

void ispisi_matricu(int n,int a[n][n])
{
    int i,j;
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
            printf("a[%d][%d]=%d\t",i,j,a[i][j]);
         printf("\n");
      }
}

int main()
{
	int n,j,i;
    printf("unesi dimenziju matrice\n");
	scanf("%d",&n);
	int a[n][n];
    unesi_matricu(n,a);
    ispisi_matricu(n,a);
    max_suma(n,a);
return 0;
}