#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void pravougaonik(float *O1, float *P1)
{
    float a,b;
    printf("unesi stranice a i b praovugaonika\n");
    scanf("%f%f",&a,&b);
    *O1=2*a+2*b;
    *P1=a*b;
}
void kvadrat(float *O1, float *P1)
{
    float a,b;
    printf("unesi stranicu a kvadrata\n");
    scanf("%f",&a);
    *O1=4*a;
    *P1=a*a;
}
void main ()
{
    float O,P;
    char ngt[20]; 
    printf("unesi naziv geomtrisjkog tela za koje zelis da izracunas P i O malim slovima\n");
    scanf("%s",&ngt);
    if(strcmp(ngt,"pravougaonik")==0)
        pravougaonik(&O,&P);
    else 
      if(strcmp(ngt,"kvadrat")==0)
            kvadrat(&O,&P);
    printf("O=%f\nP=%f",O,P);
}