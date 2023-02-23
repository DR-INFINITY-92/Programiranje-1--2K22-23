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

void broj_elemenata_niza(int *n)
{ 
    printf("unesi koliko elemenata ima niz\n");
    scanf("%d",n);
}
   
   void  prvi_negativni_element(int n,int a[n])
   {
       int i,indikator=0;
       for(i=0;i<n;i++)
       {
            if(a[i]<0)
            {
                printf("prvi negativni element je %d ",a[i]);
                indikator=1;
                break;
            }
       }
       if(indikator==0)
            printf("u datom nizu nema negativnih brojeva");
   }
void main()
{
    int n,i;
    broj_elemenata_niza(&n);
    int a[n];
    unos_niza(n,a);
    printf("elemenit polaznog niza su\n");
    ispis_niza(n,a);
    prvi_negativni_element(n,a);
}