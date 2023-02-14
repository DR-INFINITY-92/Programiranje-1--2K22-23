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
void ispisi_elente_sa_neparnim_indeksom(int n,int a[n])
{
    int i;
    printf("elemetni sa neparnim indeksom su: ");
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        printf("%d ",a[i]);
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
    ispisi_elente_sa_neparnim_indeksom(n,a);
}