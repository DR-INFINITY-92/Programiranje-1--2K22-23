#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b,c,z=0;
    printf("unnesi 1. broj\n");
    scanf("%f",&a);
    printf("unnesi 2.broj\n");
    scanf("%f",&b);
    printf("unnesi 3.broj\n");
    scanf("%f",&c);
    if(a>0)
        z=a;
    if(b>0)
        z=z+b;
    if(c>0)
        z=z+c;
    printf("zbir je %.2f\n",z);
    return 0;
}