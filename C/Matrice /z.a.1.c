#include<stdio.h>
#include<stdlib.h>
void unesi_matricu(int n,int m, int a[n][m])
{
    int i,j;
    for(j=0;j<m;j++)
    {
        for(i=0;i<m;i++)
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
void kreiraj_niz(int n, int m, float b[m],int a[n][m])
{
    int i,j,br=0,s=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            s=s+a[j][i];
        b[i]=1.0*s/n;
        s=0;
    }
     
}
void ispisi_niz(int m,float b[m])
{
    int i;
    for(i=0;i<m;i++)
        printf("%.2f",b[i]);
}
void main()
{
    int i,j,n,m;
    unesi_dimneziju_matrice(&n,&m);
    int a[n][m]; 
    float b[m];
    unesi_matricu(n,m,a);
    ispisi_matricu(n,m,a);
    kreiraj_niz(n,m,b,a);
    ispisi_niz(m,b);

}
