#include <stdio.h>

int main(void) {
	float numero1;
	float numero2;
	char operacao;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero1);
	printf("Digite a operacao (+, -, *, /): ");
	scanf(" %c", &operacao);
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	
	switch (operacao) {
		case '/':
			if (numero2 != 0) {
			    printf("Resultado: %.2f\n", numero1 / numero2);
			}else {
				printf("Nao e possivel dividir por zero.\n");
			}
			break;
		case '+':
			printf("Resultado: %f\n", numero1 + numero2);
			break;
		case '-':
			printf("Resultado: %f\n", numero1 - numero2);
			break;
		case '*':
			printf("Resultado: %f\n", numero1 * numero2);
			break;   
	}  
return 0;
}
