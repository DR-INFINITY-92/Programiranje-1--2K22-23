#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int godina;
  printf("Unesite godinu:\n");
  scanf("%d",&godina);

  /*Godina je prestupna ukoliko vazi jedan od sledecih uslova:
     1. da je deljiva sa 4, a nije deljiva sa 100 
     2. da je deljiva sa 400.*/
  if ((godina%4==0&&godina%100!=0)||godina%400==0)
    printf("Godina je prestupna.\n");
  else
    printf("Godina nije prestupna.\n");

  return 0;
}