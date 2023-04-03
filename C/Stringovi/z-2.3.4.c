#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int samoglasnik(char x)
{
    x=tolower(x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
        return 1;
    else
        return 0;
}
int samoglasnik_na_kraju(int n,char s[n])
{
    if(samoglasnik(s[n-1])==1)
        printf("Niska se zavrsava samoglasnikom");
    else    
        printf("Niska se ne zavrsava samoglasnikom");
}
void main()
{
    char s[30];
    int n;
    printf("unesi rec ili recenicu\n");
    scanf("%s",s);
    n=strlen(s);
    samoglasnik_na_kraju(n,s);
}
