#include<stdio.h>
#include<stdlib.h>
int main()
{
    int hp,hm,mp,mm,sp,sm;
    printf("unesi vreme stizanja pere u formatu h:m:s\n");
    scanf("%d%d%d",&hp,&mp,&sp);
    printf("unesi vreme stizanja Mike u formatu h:m:s\n");
    scanf("%d%d%d",&hm,&mm,&sm);
    if(hp*3600+mp*60+sp==hm*3600+mm*60+sm)
    {
        printf("oni su stigli u isto vreme");
    }
    else
    {
        if(hp*3600+mp*60+sp<hm*3600+mm*60+sm)
        {
            printf("Pera je stigao ranije od Mike");
        }
        else
        {
            printf("Mika je stigao ranije od Pere");
        }
    }

    return 0;
}