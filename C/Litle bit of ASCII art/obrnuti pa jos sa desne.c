#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  char c;
  int j,i,n;
  printf("Unesi koliko redova ima\n");
  scanf("%d",&n);
  printf("unesi karatkre\n");
  scanf(" %c",&c);
printf("===============================\n");
  printf("===============================\n");
  for(i=n;i>0;i--)
  {
      for(j=1;j<=n-i;j++)
        printf(" ");
    
    for(j=0;j<i;j++)
        printf("%c",c);
    printf("\n");
  }

}
