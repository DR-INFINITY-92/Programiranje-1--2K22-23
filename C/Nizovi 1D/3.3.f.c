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
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void broj_elemenata_niza(int *n)
{ 
    printf("unesi koliko elemenata ima niz\n");
    scanf("%d",n);
}
void kreiranje_niza_a(int n, int a[n])
{
    int i,x;
    printf("unesi broj x\n");
    scanf("%d",&x);
    a[0]=x;
    for(i=1;i<n;i++)
        a[i]=2*a[i-1];
}

void main()
{
    int n;
    broj_elemenata_niza(&n);
    int a[n];
    kreiranje_niza_a(n,a);
    printf("niz a:\n");
    ispis_niza(n,a);
}
