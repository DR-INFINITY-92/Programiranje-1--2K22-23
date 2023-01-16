#include<stdio.h>
#include<stdlib.h>
float stepen(float x, int n) 
{
    int i;
    float p=1;
    for(i=0;i<n;i++)
    {
        p=p*x;
    }
    return p;
}
int main ()
{
    int n;
    float x,k;
    printf("uensi stepen na koji zelis da dignes broj\n");
    scanf("%d",&n);
    printf("uensi broj koji zelis da dignes na %d stepen\n",n);
    scanf("%f",&x);
    k=stepen(x,n);
    printf("%f ^ %d=%f",x,n,k);
    return 0;
}