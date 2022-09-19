//Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles

#include <stdio.h>

int main(void) {
  int n1, n2, i;
  printf("Digite um número: ");
  scanf("%i", &n1);
  printf("Digite mais um número: ");
  scanf("%i", &n2);
  for (i=n1; i<=n2; i++)
      printf("%i", i);
  return 0;
} 
