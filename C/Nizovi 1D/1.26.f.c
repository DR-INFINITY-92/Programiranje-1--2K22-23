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
void broj_elemenata_niza_vecih_manjih_jednakih_nuli(int n,int a[n])
{
    int i,bvn=0,bmn=0,bn=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            bvn++;
        if(a[i]<0)
            bmn++;
        if(a[i]==0)
            bn++;
    } 
    printf("broj clanova koji su manji od nule je %d\n",bmn);
    printf("broj clanova koji su veci od nule je %d\n",bvn);
    printf("broj clanova koji su jednaki nuli je %d\n",bn);
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
    broj_elemenata_niza_vecih_manjih_jednakih_nuli(n,a);
}