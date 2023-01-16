#include<stdio.h>
#include<stdlib.h>
float razlomljeni_deo(float x)
{
    float rd;
    rd=x-(int)x;
    return rd;
}
int main ()
{
    float n,rd;
    printf("uensi decimalni broj n\n");
    scanf("%f",&n);
    rd=razlomljeni_deo(n);
    printf("razlomljeni deo broja %f je %.6f",n,rd);
    return 0;
}