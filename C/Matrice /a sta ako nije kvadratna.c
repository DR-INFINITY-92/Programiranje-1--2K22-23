#include<stdio.h>
#include<stdlib.h>
void unesi_matricu(int n,int m, int a[n][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
}
void ispisi_matricu(int n,int m, int a[n][m])
{
    int i,j;
      for(i=0;i<n;i++)
      {
        for(j=0;j<m;j++)
            printf("a[%d][%d]=%d\t",i,j,a[i][j]);
         printf("\n");
      }
}
void unesi_dimneziju_matrice(int *n,int *m)
{
    printf("unesi koliko vrsta ima matrica\n");
    scanf("%d",n);
     printf("unesi koliko kolona ima matrica\n");
    scanf("%d",m);
}
void main()
{
    int i,j,n,m;
    unesi_dimneziju_matrice(&n,&m);
    int a[n][m]; 
    unesi_matricu(n,m,a);
    ispisi_matricu(n,m,a);
}
