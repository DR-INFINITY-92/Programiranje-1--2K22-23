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
    p:
    printf("unesi koliko elemenata ima niz\n");
    scanf("%d",n);
    if(*n>100)
    {
        printf("ne zelimo da niz ima vise od 100 elementa unesi opet\n");
        goto p;
    }
        
}
int stepen(int x,int n)
{
    int i,p=1;
    for(i=0;i<n;i++)
        p=p*x;
    return p;

}
void kreiranje_niza_a(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]<0)
            a[i]=stepen(a[i],2);

}

void main()
{
    int n;
    broj_elemenata_niza(&n);
    int a[n];
    unos_niza(n,a);
    printf("elementi niza a:\n");
    ispis_niza(n,a);
    kreiranje_niza_a(n,a);
    printf("elementi niza a:\n");
    ispis_niza(n,a);
}


