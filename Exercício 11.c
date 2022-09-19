//Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de números pares e a quantidade de números impares


#include <stdio.h>
#include <stdlib.h>

int main(){

int numero = 0, par = 0, impar = 0;
  for(int i = 0; i < 5; i++){
    printf("Digite um número inteiro: ");
    scanf("%i", &numero);
    if(numero % 2 == 0) par++;
    else impar++;
    }
printf("Números pares: %i, ímpares: %i", par, impar);
  return 0;
}