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
void aritmeticka_sredina_niza_sa_parnim_indeksom(int n,int a[n])
{
    int i,s=0,brp=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            brp++;
            s=s+a[i];
        }
            
    } 
    printf("aritmeticka sredina niza je %f",s*1.0/brp);
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
    aritmeticka_sredina_niza_sa_parnim_indeksom(n,a);
}