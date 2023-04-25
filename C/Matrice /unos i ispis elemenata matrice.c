#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,n;
    printf("unesi koliko kolona i vrsta ima matrica\n");
    scanf("%d",&n);
    int a[n][n];
    // unos elemenenata matrice
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            printf("unesi a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    // ispis elenata matrice 
      for(i=0;i<n;i++)
      {
           for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=%d  ",i,j,a[i][j]);
        }
           printf("\n");
      }
}