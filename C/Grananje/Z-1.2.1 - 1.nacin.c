#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int a, b, c, min;
    printf("Unesi tri cela broja:\n");
    scanf("%d%d%d",&a,&b,&c);
    min = a;
        if (b<min)
            min = b;
        else
        if (c<min)
            min = c;
    printf("Najmanji broj je: %d\n",min);
  return 0;
}