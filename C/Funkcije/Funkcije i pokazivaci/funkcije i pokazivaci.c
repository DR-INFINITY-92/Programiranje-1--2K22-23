#include<stdio.h>
#include<stdlib.h>
void kvadrat_o_p(float *O1,float *P1)
{ 
    float a;
    printf("unesi stranicu a kvadrata");
    scanf("%f",&a);
    *O1=4*a;
    *P1=a*a;
}
void main ()
{
    float O,P;
    kvadrat_o_p(&O,&P);
    printf("P=%f\nO=%f",P,O);
}