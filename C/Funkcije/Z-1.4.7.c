#include<stdio.h>
#include<stdlib.h>
int prebrojavanje(float x) 
{
    float m=2;
    int b=0;
    while(m!=0)
    {
        printf("unesi broj\n");
        scanf("%f",&m);
        if(x==m)
            b++;
    }
    return b;
}
int main ()
{
    float n;
    int b;
    printf("uensi broj n\n");
    scanf("%f",&n);
    b=prebrojavanje(n);
    printf("u unteoj seriji brojeva broj %f se pojvljuje %d puta",n,b);
    return 0;
}