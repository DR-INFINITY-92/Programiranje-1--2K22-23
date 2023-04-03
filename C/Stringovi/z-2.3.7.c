#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char s[15],t[5];
    int n,m,b,i,j=0;
    printf("unesi prvi string\n");
    scanf("%s",s);
    printf("unesi drugi string\n");
    scanf("%s",t);
    n=strlen(s);
    m=strlen(t);
    for(i=0;i<n;i++)
        if(s[i]==t[j])
        {
            for(j=j;j<m;j++)
            {
                if(s[i+j]==t[j])
                    continue;
                else    
                    break;
            }
        }
    if(m==j)
        printf("uneti string t moze biti podstring stringa s");
    else
        printf("uneti string t ne moze biti podstring stringa s");

}
