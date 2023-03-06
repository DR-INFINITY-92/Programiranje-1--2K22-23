#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
void unos_karata_spila(int n,int spil[n])
{
    int i;
    srand(time(0)); 
    for(i=0;i<n;i++)
      spil[i]=(rand() % 14)+1;
}

void ispis_niza(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

void  broj_karata_u_spilu(int *n)
{ 
    printf("unesi koliko karata zelis da ima u spilu\n");
    scanf("%d",n);
}
void podeli_karte_igracima(int n,int m,int spil[n],int igrac1k[m],int igrac2k[m])
{
    int i,j=0;
    for(i=0;i<n-1;i++)
    {
        igrac1k[j]=spil[i];
        igrac2k[j]=spil[i+1];
        j++;
        i++;
    }

}
int provera_stihova(int x)
{
    if(x==1 || (x>9 && x<15))
        return 1;
    else
        return 0;
}
void pobednik(int m,int igrac1k[m],int igrac2k[m])
{
    int i,sk1=0,bs1=0,sk2=0,bs2=0;
    for(i=0;i<m;i++)
    {
        sk1=sk1+igrac1k[i];
        sk2=sk2+igrac2k[i];
        bs1=bs1+provera_stihova(igrac1k[i]);
        bs2=bs2+provera_stihova(igrac2k[i]);
    }
    printf("info board:\n\t");
    printf("bs1=%d bs2=%d sk1=%d sk2=%d\n\t",bs1,bs2,sk1,sk2);
    if(bs1==bs2)
        if(sk1==sk2)
            printf("nereseno je");
        else
            if(sk1>sk2)
                printf("pobednik je prvi igrac");
            else    
                printf("pobednij je drugi igrac");
    else
        if(bs1>bs2)
            printf("pobedio je prvi igrac");
        else    
            printf("pobednij je drugi igrac");
        
}

void main()
{
    int n;
    broj_karata_u_spilu(&n);
    int spil[n];
    unos_karata_spila(n,spil);
    printf("karte koje su u spilu su:\n");
    ispis_niza(n,spil);
    int m=n/2;
    int igrac1k[m],igrac2k[m];
    podeli_karte_igracima(n,m,spil,igrac1k,igrac2k);
    printf("karte prvog igraca su:\n");
    ispis_niza(m,igrac1k);
    printf("karte drugog igraca su:\n");
    ispis_niza(m,igrac2k);
    pobednik(m,igrac1k,igrac2k);

  

}


