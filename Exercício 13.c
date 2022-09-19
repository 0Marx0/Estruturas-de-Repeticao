//Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120

 #include <stdio.h>
 #include <string.h>

 void calculaFatorial(int numero){
   int resultado = 1;
   char conta[50] = "", parcela[50];
  
   for(int i= 1; i < numero+1; i++){

     resultado = resultado * i;

   }
  
   for(int j = numero; j > 0; j--){
     sprintf(parcela, "%d", j);
     strcat(conta, parcela);
     if(j > 1) strcat(conta, " . "); 
   }

   printf("%i! = %s = %i", numero, conta, resultado);
 }

 int main(){
   int numero;
  
   printf("Digite um número: ");
   scanf("%i", &numero);
  
   calculaFatorial(numero);
  
   return 0;
 }