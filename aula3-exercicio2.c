#include <stdio.h>
#include <stdlib.h>

int main() {
float av , simulado1, simulado2, notaFinal;

printf("Digite a nota da AV: ");
scanf("%f", &av);

printf("Digite a nota do simulado1 (0 a 1): ");
scanf("%f", &simulado1);

printf("Digite a nota do simulado2 (0 a 1): ");
scanf("%f", &simulado2);

notaFinal = av + simulado1 + simulado2;
notaFinal = (notaFinal > 10) ? 10 : notaFinal;

printf("Nota final: %.1f\n", notaFinal);

return 0;
}
