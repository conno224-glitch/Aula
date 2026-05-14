#include <stdio.h>

int main(void) {
float notas[5];
float soma = 0;
float media;
int acimadamedia = 0;

for (int i = 0; i < 5; i++) {
	printf("Digite a nota %d: " , i + 1);
	scanf("%f", &notas[i]);
	soma += notas[i];
}
media = soma / 5;
for (int i = 0; i < 5; i++) {
	if (notas[i] > media) {
		acimadamedia++;
	}
}
printf("\nMedia da turma: %.2f\n", media);
printf("Quantidade de notas acima da media: %d\n", acimadamedia);
	
	return 0;
 }
