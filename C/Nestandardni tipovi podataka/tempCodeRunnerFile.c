#include<stdio.h>

typedef struct 
{
    char pol;
    char ime[10];
    char prezime[10];
    int godine;
    double visina;
    double masa;
}osoba;

int main()
{
    osoba pavle,dusan;
    printf("unesi ime osobe\n");
    scanf("%s", &pavle.ime);
    printf("unesi prezime osobe\n");
    scanf("%s", &pavle.prezime);
    printf("unesi godine osobe\n");
    scanf("%d", &pavle.godine);
    printf("unesi visinu osobe\n");
    scanf("%lf", &pavle.visina);
    printf("unesi masu osobe\n");
    scanf("%lf", &pavle.masa);
    


    printf("unesi ime osobe\n");
    scanf("%s", &dusan.ime);
    printf("unesi prezime osobe\n");
    scanf("%s", &dusan.prezime);
    printf("unesi godine osobe\n");
    scanf("%d", &dusan.godine);
    printf("unesi visinu osobe\n");
    scanf("%lf", &dusan.visina);
    printf("unesi masu osobe\n");
    scanf("%lf", &dusan.masa);
    if(pavle.masa==dusan.masa)
        printf("oboje imaju istu masu");
    else
        if(pavle.masa>dusan.masa)
            printf("pavle ima vecu masu od dusana");
        else   
            printf("dusan ima vecu masu od pavla");
    // printf("podaci o osobi sa imenom %s i preziomeno %s su:\n",O1.ime,O1.prezime);
    // printf("godine:%d\n",O1.godine);
    // printf("visina:%lf\n",O1.visina);
    // printf("masa:%lf\n",O1.masa);


    return 0;
}
