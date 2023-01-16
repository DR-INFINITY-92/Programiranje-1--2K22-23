#include<stdio.h>
#include<stdlib.h>
float kvadrat(float x) 
{
    return x*x;
}
    
float kub(float x) 
{
    return x*x*x;
}
int main ()
{
    float n,kv,kubb;
    printf("uensi broj n koji zelih da dignes na kvadrat i na kub\n");
    scanf("%f",&n);
    kv=kvadrat(n);
    kubb=kub(n);
    printf("kvadrat broja %f je %f\n kub broja%f je %f",n,kv,n,kubb);
    return 0;
}