#include<stdio.h>
#include<stdlib.h>
float aritmeticka_sredna(int n)
{
    float s=0,bc=0;
    while(n!=0)
    {
        s=s+n%10;
        n=n/10;
        bc++;
    }
    return s/bc;
}
int main ()
{
    int n;
    float as;
    printf("uensi decimalni broj n\n");
    scanf("%d",&n);
    as=aritmeticka_sredna(n);
    printf("aritmeticka sredina zbira cifara celog broja n je %.3f",as);
    return 0;
}