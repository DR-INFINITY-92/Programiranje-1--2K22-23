#include <stdio.h>
#include <stdlib.h>

void unos_n_i_m(int *n, int *m)
{
    printf("Unesi koliko vrsta ima matrica.\n");
    scanf("%d",n);
    printf("Unesi koliko kolona ima matrica.\n");
    scanf("%d",m);
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
void unos(int n,int m,int a[n][m])
{
    int i,j;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    {
        printf("a[%d][%d]==",i,j);
        scanf("%d",&a[i][j]);
    }
}
void matrix_create(int n,int m,int a[n][m],int b[n][m],int c[n][m])
{
    int i,j;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
        c[i][j]=max(a[i][j],b[i][j]);
}
int max(int x,int y)
{
    if(x>=y)
        return x;
    else
        return y;
}
int main()
    {
    int n,m;
    unos_n_i_m(&n,&m);
    int a[n][m],b[n][m],c[n][m];
    printf("Unos prve matrice:\n");
    unos(n,m,a);
    printf("========\n");
    printf("Unos druge matrice:\n");
    unos(n,m,b);
    printf("========\n");
    printf("Ispis prve matrice:\n");
    ispis(n,m,a);
    printf("==================\n");
    printf("Ispis druge matrice:\n");
    ispis(n,m,b);
    printf("===================\n");
    matrix_create(n,m,a,b,c);
    printf("Resenje:\n");
    ispis(n,m,c);
return 0;
}
