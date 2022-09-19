//Altere o programa anterior para mostrar no final a soma dos números.

#include <stdio.h>

int main(void) {
  int n1, n2, i, soma = 0;
  printf("Digite um número: ");
  scanf("%i", &n1);
  printf("Digite mais um número: ");
  scanf("%i", &n2);
    for (i=n1; i<=n2; i++){
    printf("%i", i);
    soma += i;}
  printf("\n%i", soma);
  return 0;
}
