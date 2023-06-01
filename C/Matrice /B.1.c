#include<stdio.h>
#include<stdlib.h>
void unesi_matricu(int n,int m, int a[n][m])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
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
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
            printf("a[%d][%d]=%d\t",i,j,a[i][j]);
         printf("\n");
      }
}
void unesi_dimneziju_matrice(int *n,int *m)
{
    printf("unesi koliko vrsta ima matrica\n");
    scanf("%d",m);
    printf("unesi koliko kolona ima matrica\n");
    scanf("%d",n);
}
void max_index_na_gd(int n, int m, int a[m][n])
{
    int i,j,max,max_i;
    max_i=0;
    max=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]>max)
                {
                    max=a[i][j];
                    max_i=i;
                }
            }
        }
    }
    printf("indeks najveceg elementa na glavnoj dijagonali je %d i on je %d",max_i,a[max_i][max_i]);
}

void main()
{
    int i,j,n,m;
    unesi_dimneziju_matrice(&n,&m);
    int a[n][m];
    unesi_matricu(n,m,a);
    ispisi_matricu(n,m,a);
    max_index_na_gd(n,m,a);
}
