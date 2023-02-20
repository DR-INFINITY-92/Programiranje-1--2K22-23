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
        printf("%d ",a[i]);
    }
    printf("\n");
}
void suma_elemenata_niza_sa_indeksom_koji_je_deljiv_sa_3(int n, int a[n])
{
    int i,s=0;
    for(i=0;i<n;i++)
        if(i%3==0)
            s=s+a[i];
        
    printf("suma elemnata niza je %d",s);
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
    suma_elemenata_niza_sa_indeksom_koji_je_deljiv_sa_3(n,a);
}