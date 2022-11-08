#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x;
    printf("unesi realni broj\n");
    scanf("%f", &x);
    if(x<0)
        printf("apsolutna vrednost broja x je = %.2f",(-1)*x);
    else
        printf("apsolutna vrednost broja x je = %.4f",x);
}