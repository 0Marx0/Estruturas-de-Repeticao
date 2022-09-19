//Faça um programa que calcule a Sequência de Fibonacci até um certo limite estipulado pelo usuário

#include <stdio.h>

int fibonacci(int n){
  int fib1=1, fib2=1, f, i;
  if (n==1 || n==2)
    return 1;
  else{
    for(i=3;i<=n;i++){
      f = fib1+fib2;
      fib1 = fib2;
      fib2 = f;
    }
    return f;
  }
}
int main(){
  int n, i;
  printf("N: ");
  scanf("%i", &n);
  for (i=1; i<=n; i++)
    printf("%i, ", fibonacci(i));
  return 0;
  }