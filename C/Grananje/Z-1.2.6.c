#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s,m;
    p:
    printf("unesi broj sati i broj minuta\n");
    scanf("%d",&s);
    scanf("%d",&m);
    if(s<0 || s>23 || m<0 || m>59)
        {   
                    printf("neispravan unos vremena unesi opet\n");
                    goto p;
        }
    else
    {
        int pv;
        pv=24*60-(s*60+m);
        printf("do ponoci ima %d sati i %d minuta",pv/60,pv%60);
    }
    return 0;
}