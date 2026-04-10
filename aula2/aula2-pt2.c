#include <stdio.h>
#include <stdlib.h>



int main(void) {
	
int idade;
float altura;
char inicial;
char resposta;

puts("=== Cadastro simples em C ===");

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Digite sua altura (exemplo: 1.75): ");
scanf("%f", &altura);

printf("Digite a inicial do seu nome: ");
scanf(" %c", &inicial);

printf("\n===========================================\n");
	
getc (stdin);

printf("Voce gosta de programacao? (s/n): ");
resposta = getc(stdin);
idade = idade + 1;

printf("\n=== Resultados ===\n");
printf("No proximo ano, voce tera %d anos.\n", idade);
printf("Sua altura informada foi %.2f m.\n", inicial);
printf("Sua resposta foi %c.\n", resposta);

puts("Programa encerrado com sucesso.");
	
return 0;		
}
