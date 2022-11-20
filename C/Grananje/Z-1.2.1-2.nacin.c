#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int a, b, c, min;
    printf("Unesi tri cela broja:\n");
    scanf("%d%d%d",&a,&b,&c);
        if (a<b && a<c)
            min = a;
        else
            if (b < a && b<c)
                min = b;
            else
                min=c;
    printf("Najmanji broj je: %d\n",min);
  return 0;
}