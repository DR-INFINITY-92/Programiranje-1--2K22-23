#include<stdio.h>
#include<stdlib.h>

int main() 
{
  int dan, mesec, godina, prethodni_dan, prethodni_mesec, prethodna_godina;
  /* Ucitavanje datuma. */
  printf("Unesite datum: \n");
  scanf("%d%d%d", &dan, &mesec, &godina);

  prethodni_dan = dan - 1;
  prethodni_mesec = mesec;
  prethodna_godina = godina;

  /* Ako je potrebno, vrse se korekcije. */
    if (prethodni_dan == 0) 
        prethodni_mesec = mesec - 1;
    if (prethodni_mesec == 0) 
    {
            prethodni_mesec = 12;
            prethodna_godina = godina - 1;
    }

    switch (prethodni_mesec) 
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      prethodni_dan = 31;
      break;
    case 2:
      if ((prethodna_godina % 4 == 0 && prethodna_godina % 100 != 0)|| prethodna_godina % 400 == 0)
        prethodni_dan = 29;
      else
        prethodni_dan = 28;
    break;
    case 4:
    case 6:
    case 9:
    case 11:
      prethodni_dan = 30;
      break;
    }
  printf("Prethodni datum: %d.%d.%d.\n",prethodni_dan, prethodni_mesec, prethodna_godina);
  return 0;
}