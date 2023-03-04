#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void unos_trajanja_putovanja_za_autobuse(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("unesi vreme putovanja u minutima za %d. autobus \n",i+1);
        scanf("%d",&a[i]);
    }
}

void ispis_vremena_putovanja(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

void broj_autobusa(int *n)
{ 
    p:
    printf("unesi koliko ima autobusa\n");
    scanf("%d",n);
    if(*n>200)
    {
        printf("ne zelimo da ima vise od 200 autobusa unesi opet\n");
        goto p;
    }
        
}
void uracunavanje_kasnjenja(int n, int a[n])
{
    int i,k,t,m;
    printf("unesi koliko je kasnjenje na relaciji Pozega-Uzice u minutima\n");
    scanf("%d",&m);
    printf("unesi brojeve k i t koji predstavljaju pocetak i kraj redih brojeva koji saobracaju na ovoj relaciji\n");
    scanf("%d%d",&k,&t);
    for(i=k;i<t;i++)
        a[i]=a[i]+m;

}

void main()
{
    int n;
    broj_autobusa(&n);
    int a[n];//u ovom nizu koji ima elemnata koliko ima i autobusa nalaze se vremena putovanja autobusa
    unos_trajanja_putovanja_za_autobuse(n,a);
    printf("vrmena putovanja po autbusima su:\n");
    ispis_vremena_putovanja(n,a);
    uracunavanje_kasnjenja(n,a);
    printf("vrmena putovanja po autbusima nakon uracunatog kasnjenja su:\n");
    ispis_vremena_putovanja(n,a);
}


