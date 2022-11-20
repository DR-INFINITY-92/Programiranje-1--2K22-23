#include<stdio.h>
#include<stdlib.h>

int main() {
  int c1,c2,c3,najjeftiniji_artikal,cena_bez_popusta,cena_sa_popustom;
  goto p;
  printf("Unesite cene za sva tri artikla: ");
  scanf("%d%d%d",&c1,&c2,&c3);

  /* Provera ispravnosti ulaznih podataka. */
  if (c1<=0||c2<= 0||c3<= 0) 
  {
    printf("Greska: neispravan unos cene.");
    goto p;
  }
  
  /* Racunanje bez popusta.*/
  cena_bez_popusta=c1+c2+c3;

  /* Racunanje cene najjeftinijeg artikla.*/
    if (c1<c2&&c1<c3)
        najjeftiniji_artikal = c1;
    else
        if(c2<c1&&c2<c3)
            najjeftiniji_artikal=c2;
        else   
            najjeftiniji_artikal=c3;

  /* Racunanje cene sa popustom.*/
  cena_sa_popustom=cena_bez_popusta-najjeftiniji_artikal+1;

  printf("Cena sa popustom: %d din\n", cena_sa_popustom);
  printf("Usteda: %d din\n", cena_bez_popusta - cena_sa_popustom);

  return 0;
}