#include<stdio.h>
#include<stdlib.h>
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
        printf("a[%d]=%d ",i,a[i]);
    }
    printf("\n");
}
void ispis_suseda_cija_suma_je_parna(int n, int a[n])
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if((a[i]+a[i+1])%2==0)
            printf("%d %d \n",a[i],a[i+1]);
    }
}
void broj_elemenata_niza(int *n)
{ 
    printf("unesi koliko elemenata ima niz\n");
    scanf("%d",n);
}
void main()
{
    int n,i;
    broj_elemenata_niza(&n);
    int a[n];
    unos_niza(n,a);
    printf("elemenit polaznog niza su\n");
    ispis_niza(n,a);
    ispis_suseda_cija_suma_je_parna(n,a);
    
}