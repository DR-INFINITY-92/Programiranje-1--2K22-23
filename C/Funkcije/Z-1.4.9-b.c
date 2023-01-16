#include<stdio.h>
#include<stdlib.h>
float apsolutna_vrednost(float x) 
{
    if(x<0)
        return x*(-1);
    else 
        return x;
}
    
int main ()
{
    float n,aps_v;
    printf("uensi broj n ciju aposlutrnu vrednost zelis da nadjes\n");
    scanf("%f",&n);
    aps_v=apsolutna_vrednost(n);
    printf("apsolutna vrednost broj %f je %f",n,aps_v);
    return 0;
}