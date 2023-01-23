#include<stdio.h>
#include<stdlib.h>
int parne_cifre(int x)
{
    int bnc=0;
    while(x!=0)
    {
        if((x%10)%2!=0)
        {
            bnc=1;
            return bnc;
        }
        x=x/10;
    }
    return bnc;
}
int main ()
{
    int n;
    printf("unesi celi broj n\n");
    scanf("%d",&n);
    if(parne_cifre(n)==0)
        printf("broj %d se sastoji iskljucivo od parnih cifara",n);
    else
         printf("broj %d se ne sastoji samo od parnih cifara",n);
    return 0;
}