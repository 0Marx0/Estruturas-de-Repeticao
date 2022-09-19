//Faça um programa que imprima na tela os números de 1 a 20, um abaixo do outro. Depois modifique o programa para que ele mostre os números um ao lado do outro.

#include <stdio.h>

int main(void) {
  int i;
  for(i=1;i<=20;i++)
    printf("%i, \n", i);
  for(i=1;i<=20;i++)
    printf("%i, ", i);
  return 0;
}