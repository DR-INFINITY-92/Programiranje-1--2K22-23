#include<stdio.h>
#include<stdlib.h>
void unesi_matricu(int n,int a[n][n])
{
    int i,j;
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            printf("a[%d][%d]=",j,i);
            scanf("%d",&a[j][i]);
        }
    }
    printf("\n");
}
void ispisi_matricu(int n, int a[n][n])
{
    int i,j;
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
            printf("a[%d][%d]=%d\t",i,j,a[i][j]);
         printf("\n");
      }
}
void unesi_dimneziju_matrice(int *n)
{
    printf("unesi koliko vrsta ima matrica\n");
    scanf("%d",n);
}
void kreiraj_niz(int n,float b[n*n],int a[n][n])
{
    int i,j,br=0,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        	b[br]=a[i][j];
        	br++;
		}
        
    }
    for(i=0;i<br-1;i++)
    	for(j=i+1;j<br;j++)
    	{
    		if(b[i]>b[j])
    		{
    			t=b[i];
    			b[i]=b[j];
    			b[j]=t;
			}
		}
	br=0;
	 for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        	a[i][j]=b[br];
        	br++;
		}
        
    }
    
     
}
void ispisi_niz(int m,float b[m])
{
    int i;
    for(i=0;i<m;i++)
        printf("%.2f  ",b[i]);
}
void main()
{
    int i,j,n,m;
    unesi_dimneziju_matrice(&n);
    int a[n][n]; 
    float b[n*n];
    unesi_matricu(n,a);
    ispisi_matricu(n,a);
    kreiraj_niz(n,b,a);
    ispisi_niz(n*n,b);
    printf("\n");
     ispisi_matricu(n,a);

}