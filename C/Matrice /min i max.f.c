#include<stdio.h>
#include<stdlib.h>
void unos_matrice(int n, int a[n][n])
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            printf("unesi a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
}
void ispis_matrice(int n,int a[n][n])
{
    int i,j;
    for(i=0;i<n;i++)
      {
           for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=%d  ",i,j,a[i][j]);
        }
           printf("\n");
      }
}
void min_i_max(int n, int a[n][n])
{
    int i,j,min,max;
    min=a[0][0];
    max=a[0][0];
    for(i=0;i<n;i++)    
        for(j=0;j<n;j++)
        {
            if(a[i][j]<min)
                min=a[i][j];
            if(a[i][j]>max)
                max=a[i][j];  
        } 
         printf("najmanji element matrice je max=%d\n",min);
        printf("najveci element matrice je max=%d\n",max);
}
void main()
{
    int i,j,n;
    printf("unesi koliko kolona i vrsta ima matrica\n");
    scanf("%d",&n);
    int a[n][n];
    unos_matrice(n,a);
    ispis_matrice(n,a);
    min_i_max(n,a);
}