#include<stdio.h>
#include<stdlib.h>
int broj_pojavljivanja_maximaln_cifre_u_broj_n(int m,int mc)
{
    int b=0;
    while(m!=0)
    {
        if(m%10==mc)
            b++;
        m=m/10;
    }
    return b;
}
void ispisi_najvecu_cifru(int h,int k)
{
    printf("najveca cifra unetog broja %dje %d\n",h,k);
}
void max_cifra(int m)
{
    int mc,n;
    n=m;
    mc=m%10;
    m=m/10;
    while(m!=0)
    {
        if(m%10>mc)
            mc=m%10;
        m=m/10;
    }
    ispisi_najvecu_cifru(n,mc);
    m=broj_pojavljivanja_maximaln_cifre_u_broj_n(n,mc);
    printf("najveca cifra %d se u broju %d pojavlju %d puta\n",mc,n,m);
    
}
void main ()
{
    int n;
    printf("unesi celi broj n\n");
    scanf("%d", &n);
    max_cifra(n);

}