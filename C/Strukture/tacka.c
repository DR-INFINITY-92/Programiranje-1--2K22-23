#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct 
{
    int x;
    int y;
}tacka;

int  main()
{
    tacka A,B;
    int x,y;
    printf("Unesite x i y koordinate tacke A:\n ");
    scanf("%d%d",&A.x,&A.y);
    printf("Unesite x i y koordinate tacke B:\n");
    scanf("%d%d",&B.x,&B.y);
    x=A.x * A.x;
    y=A.y * A.y;
    printf("udaljenost tacke A od koordinatnog pocetka je %f\n",x);
    // printf("udaljenost tacke B od koordinatnog pocetka je %f\n",sqrt((B.x*B.x)+(B.y*B.y)));
    return 0;
}