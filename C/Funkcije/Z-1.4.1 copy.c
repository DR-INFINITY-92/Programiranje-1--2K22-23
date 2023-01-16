#include<stdio.h>
#include<stdlib.h>
int min(int x, int y, int z)
{
    if((x<y) && (x<z))
        return x;
    else
        if((y<x) && (y<z))
            return y;
        else 
            return z;
}
int main ()
{
    int a,b,c;
    printf("unesi vrednosti za cele brojeve a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("najamji broj od unetih brojeva %d %d %d je %d",a,b,c,min(a,b,c));
    return 0;
}