#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {
  char s[30];
  int i=0;
  printf("Unesite nisku:\n");
  fgets(s,sizeof(s),stdin);
  printf("Unesite broj kopiranja:\n");
  while(s[i]!='\0')
  {
    if(s[i]!=' ')
         printf("%c",s[i]);
    else    
    {
       
        printf("\n");
    }
    i++;
        
  }
//   printf("%s",s);
}
