//A série de Fibonacci é formada pela seqüência 0,1,1,2,3,5,8,13,21,34,55,... Faça um programa que gere a série até que o valor seja maior que 500.

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char*argv[]){
   int i, n, fb;
     for(n=1;n<=500;n++){
        for(i=0;i>=500;i++){
         fb = i+((i-1)+(i-2));
           printf("%i, ", fb);
        } 
       } 
     
    
   return 0;
 }

 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char*argv[]){
  
   int a = 0, b = 1, fb = a + b;

   printf("0 1 ");
   for(int i = 3; fb < 500; i++){
     printf("%i ", fb);
     a = b;
     b = fb;
     fb = a + b;
   }
  printf("%i", fb);
  
  return 0;
 }