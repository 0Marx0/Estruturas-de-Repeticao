//Faça um programa que defina o maior número entre 5 passados pelo usuário

#include <stdio.h>

int main(void) {
  int i, n, maior;
  printf("N1: ");
  scanf("%i", &n);
  maior = n;
  for(i=2; i<=5; i++){
    printf("N%i: ", i);
    scanf("%i ", &n);
    if(n>maior)
      maior = n;
  }
  printf("Maior: %i. \n", maior);
  return 0;
}