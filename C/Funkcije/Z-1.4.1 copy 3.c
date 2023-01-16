#include<stdio.h>
#include<stdlib.h>
void min()
{
    int x,y,z;
    printf("unesi vrednosti za cele brojeve a,b,c\n");
    scanf("%d%d%d",&x,&y,&z);
    if((x<y) && (x<z))
         printf("najamji broj od unetih brojeva %d %d %d je %d\n",x,y,z,x);
    else
        if((y<x) && (y<z))
            printf("najamji broj od unetih brojeva %d %d %d je %d\n",x,y,z,y);
        else 
            printf("najamji broj od unetih brojeva %d %d %d je %d\n",x,y,z,z);  
}
int main ()
{
    int i;
    for(i=0;i<3;i++)
        min();
    return 0;
}