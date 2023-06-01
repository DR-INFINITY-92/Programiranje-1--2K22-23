#include <stdio.h>
#include <stdlib.h>

void unos_n(int *n)
{
    printf("Unesi dimenziju kvadratne matrice.\n");
    scanf("%d",n);
}
void unos(int n, int a[n][n])
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]==",i,j);
            scanf("%d",&a[i][j]);
        }
}
void kreiranje_niza_suma(int n,int a[n][n])
{
    int i,j,b[2*n+1],z=0;
    for(i=0;i<=2*n;i++)
        b[i]=0;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(i==j)
                b[2*n]=b[2*n]+a[i][j];
                b[i]=b[i]+a[i][j];
        }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            b[i+n]=b[i+n]+a[j][i];
        }
    for(i=0;i<=2*n;i++)
         printf(" %d ",b[i]);

    z=provera(n,a,b);
    if (z==0)
        printf("Nije  magicni kvadrat.");
    else
         printf("Jeste magicni kvadrat.");
    }

int provera(int n, int a[n][n], int b[2*n+1])
{
    int i,j,br;
    for(i=0;i<2*n;i++)
        if(b[i]!=b[i+1])
            return 0;
    return 1;
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

int main()
{
    int n;
    unos_n(&n);
    int a[n][n];
    unos(n,a);
    ispis(n,a);
    kreiranje_niza_suma(n,a);
return 0;
}
