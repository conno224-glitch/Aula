#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia a idade de uma pessoa. Se idade >= 18, exiba a mensagem "maior de idade", senao , exiba nada */

int main() {
float idade;

printf("Digite sua idade: ");
scanf("%f", &idade);

if (idade >= 18) 
  printf("Maior de idade\n");

return 0;
}
