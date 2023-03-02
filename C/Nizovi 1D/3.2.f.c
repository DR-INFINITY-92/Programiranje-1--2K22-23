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
void kreiranje_niza_c(int n, int a[n], int b[n], int c[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<b[i])
            c[i]=a[i];
        else    
            c[i]=b[i];
    }
}
void main()
{
    int n;
    broj_elemenata_niza(&n);
    int a[n],b[n],c[n];
    unos_niza(n,a);
    printf("elemenit polaznog niza su\n");
    ispis_niza(n,a);
    unos_niza(n,b);
    printf("elemenit polaznog niza su\n");
    ispis_niza(n,b);
    kreiranje_niza_c(n,a,b,c);
    printf("niz c:\n");
    ispis_niza(n,c);
}
