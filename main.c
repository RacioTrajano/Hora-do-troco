#include <stdio.h>


int repetido[20][20][20][20][20][20][20];

void troco (int money, int cem, int cinquenta, int vinte, int dez, int cinco, int dois, int real){

int cont =1;
if (money == 0){
  if (repetido[cem][cinquenta][vinte][dez][cinco][dois][real]==0){
  printf("Troco %d: ", cont);
    if (cem != 0){
        printf("%d nota(s) de 100 ", cem);
      }
    if (cinquenta != 0){
        printf("%d nota(s) de 100 ", cinquenta);
      }
    if (vinte != 0){
        printf("%d nota(s) de 100 ", vinte);
      } 
    if (dez != 0){
        printf("%d nota(s) de 100 ", dez);
      }
    if (cinco != 0){
        printf("%d nota(s) de 100 ", cinco);
      }
    if (dois != 0){
        printf("%d nota(s) de 100 ", dois);
      }
    if (real != 0){
        printf("%d moeda(s) de 100 ", real);
      }
printf("\n");
cont++;
repetido[cem][cinquenta][vinte][dez][cinco][dois][real]=1;
}

}

else{
  if(money > 100){
    troco(money -100, cem +1, cinquenta, vinte, dez, cinco, dois, real);
  }
  if(money > 50){
    troco(money -100, cem , cinquenta+1, vinte, dez, cinco, dois, real);
  }
  if(money > 20){
    troco(money -100, cem +1, cinquenta, vinte+1, dez, cinco, dois, real);
  }
  if(money > 10){
    troco(money -100, cem +1, cinquenta, vinte, dez+1, cinco, dois, real);
  }
  if(money > 5){
    troco(money -100, cem +1, cinquenta, vinte, dez, cinco+1, dois, real);
  }
  if(money > 2){
    troco(money -100, cem +1, cinquenta, vinte, dez, cinco, dois+1, real);
  }
  if(money > 1){
    troco(money -100, cem +1, cinquenta, vinte, dez, cinco, dois, real+1);
  }
}



}



int main () {

int dinheiro;
scanf ("%d", &dinheiro);

troco(dinheiro,0,0,0,0,0,0,0);


  return 0;
}