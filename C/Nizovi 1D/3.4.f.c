#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void unos_niza(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("unesi %d. element niza\n",i+1);
        scanf("%d",&a[i]);
    }
}

void ispis_niza(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

void broj_elemenata_niza(int *n)
{ 
    printf("unesi koliko elemenata ima niz\n");
    scanf("%d",n);
}
void kreiranje_niza_b(int n, int a[n],int b[n])
{
    int i,x;
    for(i=0;i<n;i++)
        b[i]=a[n-1-i];

}

void main()
{
    int n;
    broj_elemenata_niza(&n);
    int a[n],b[n];
    unos_niza(n,a);
    printf("elementi niza a:\n");
    ispis_niza(n,a);
    kreiranje_niza_b(n,a,b);
    printf("elementi niza b:\n");
    ispis_niza(n,b);
}


