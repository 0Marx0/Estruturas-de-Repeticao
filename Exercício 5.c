//Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.

#include <stdio.h>
    int main(void){
    int i;
    for(i=1;i<=50;i+=2)
      printf("%i, ", i);
    return 0;
}