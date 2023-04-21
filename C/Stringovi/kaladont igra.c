#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void strcat1(int k,int n, int o, char s[n], char t[o])
{
    int i;
    char s2[1];
    s2[0]='-';
    t[0]='\0';
    for(i=0;i<k;i++)
    {
        strcat(t,s);
        if(i<k-1)
            strcat(t,s2);
    }
}
int main() {
  char s1[30],igrac_1[20],s2[30],igrac_2[20];
  int n,o,k;
  printf("unesi ime prvog igraca\n");
  scanf("%s", igrac_1);
  printf("unesi ime drugog igraca\n");
  scanf("%s", igrac_2);
  printf("unesi broj 1 ako 1. igra prvi, ukoliko 2. igrac igra prvi unesi broj 2");
  scanf("%d",&red_igranja);
  printf("Unesite broj kopiranja:\n");
  if(red_igranja==1)
  {
    printf("unesi rec prvog igraca\n");
    scanf("%s", s1);
    n=
    win_status()

  }
  else
  {

  }
  scanf("%d",&k);
  n=strlen(s);
  o=(k*n)+(k-1);
  char t[o];
strcat1(k,n,o,s,t);
printf("Rezultat s=: %s\n", s);
printf("\n Rezultat t=: %s\n", t);
}
