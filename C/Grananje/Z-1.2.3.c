#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x;
    p:
    printf("unesi realni broj\n");
    scanf("%f", &x);
    if(x==0)
    {
        printf("nije dozvoljeno deljenje nulom\n");
        goto p;
    }
    else
        printf("reciprocna vrednost broja x je = %.4f",1/x);
    return 0;
}