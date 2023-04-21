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
  for(i=0;i<n;i++)
  {
      for(j=0;j<i+1;j++)
        printf("%c",c);
    printf("\n");
  }

}
