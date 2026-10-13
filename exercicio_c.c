// Calcula a soma de um número até 100

#include <stdio.h>

int main() {
  int soma = 0;
  for(int i = 1; i <= 100; i++) {
    soma = soma + i;
  }

  printf("A soma é %d", soma);
}