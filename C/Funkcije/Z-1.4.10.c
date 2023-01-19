#include<stdio.h>
#include<stdlib.h>
float aritmeticka_sredna(int n)
{
    int s=0,bc=0;
    float as;
    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
        bc++;
    }
    as=1.0*s/bc;
    return as;
}
int main ()
{
    int n;
    printf("uensi decimalni broj n\n");
    scanf("%d",&n);
    printf("aritmeticka sredina zbira cifara celog broja n je %.3f",aritmeticka_sredna(n));
    return 0;
}