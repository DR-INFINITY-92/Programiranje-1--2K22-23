#include <stdio.h>
#include <stdlib.h>

void unos_n(int *n)
{
    printf("Unesi velicinu 1. niza.\n");
    scanf("%d",n);
}

void unos_m(int *m)
{
    printf("Unesi velicinu 2. niza.\n");
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
    printf("\n");
}

void niz(int x, int y[x])
{
    int i;
    for(i=0;i<x;i++)
    {
        printf("x[%d]==",i);
        scanf("%d",&y[i]);
    }
}
void matrix_create(int n, int m, int a[n],int b[m],int c[n][m])
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            c[i][j]=a[i]*b[j];
}
int main()
{
    int n,m;
    unos_n(&n);
    int a[n];
    niz(n,a);
    unos_m(&m);
    int b[m],c[n][m];
    niz(m,b);
    printf("matrica:\n");
    matrix_create(n,m,a,b,c);
    ispis(n,m,c);
return 0;
}
