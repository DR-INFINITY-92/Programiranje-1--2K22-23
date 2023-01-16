#include<stdio.h>
#include<stdlib.h>
float razlomljeni_deo(float x)
{
    return x-(int)x;
}
int main ()
{
    float n;
    printf("uensi decimalni broj n\n");
    scanf("%f",&n);
    printf("razlomljeni deo broja %f je %.6f",n,razlomljeni_deo(n));
    return 0;
}