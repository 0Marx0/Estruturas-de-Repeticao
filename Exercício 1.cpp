//Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.



#include <stdio.h>

int main(void) {

    int n;

    do{

        printf("N: ");

        scanf("%i", &n);

        if (n<0 || n>10){

            printf("Não.. Um número entre 0 e 10!\n");

            printf("Digite novamente!\n");

        }

    }while(n<0 || n>10);

    printf("O número %i é válido!", n);

    return 0;

}