//Faça um programa que peça um número base e um expoente para que esse número possa ser elevado

#include <stdio.h>

  int potencial(int base, int expoente){
    int p=1, i;
    for(i=1; i<=expoente; i++)
      p = p * base;
    return p;
  }

  int main(void) {
    int b, e;
    printf("Base: ");
    scanf("%i", &b);
    printf("Expoente: ");
    scanf("%i", &e);
    printf("%i^%i = %i\n", b, e, potencial(b,e));
  return 0;
}