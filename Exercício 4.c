//Faça um programa que peça 5 números, calcule a soma deles e faça a média total

#include <stdio.h>

int main(void) {
  int i, n, soma;
  float media;
  soma = 0;
  for(i=1; i<=5; i++){
    printf("N%i: ", i);
    scanf("%i", &n);
    soma = soma+n;
  }
  media = (float)soma/5;
  printf("Soma: %i. \n", soma);
  printf("Média: %2.f. \n", media);
}