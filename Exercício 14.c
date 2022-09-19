//Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um número primo é aquele que é divisível somente por ele mesmo e por 1.

 #include <stdio.h>
 #include <stdlib.h>

 int primo(int num){
   int primo = 0;
  
   if(num == 1) return 1;
  
   for(int i = 2; i <= num; i++){
     primo = num % i == 0 ? primo+1 : primo+0;
   }
  
   return primo;
 }

 int main(){
   int numero;
   char* eh_primo;
   printf("Digite um número: ");
   scanf("%i", &numero);
   eh_primo = primo(numero) == 1 ? "Sim" : "Não";
   printf("O número %i é primo? %s", numero, eh_primo);
 }