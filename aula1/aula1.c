#include <stdio.h>
#include <stdlib.h>



int main(void){
int x = 100, y = 10;

printf("Valor inicial de x: %d \n", x);


printf("\n------------------Pos-incremento--------------------- \n\n");
printf("Valor de x na mesma linha do pos-incremento: %d \n ", x++);
printf("Valor de x na linha seguinte ao pos-incremento: %d \n", x);


printf("\n-----------------------Pre-incremento------------------------ \n\n");
printf("Valor de x na mesma linha do pre-incremento: %d \n", ++x);

printf("Valor inicial de y: %d \n", y);


printf("\n-------------------Pos-decremento------------------------\n\n");
printf("Valor de y na mesma linha do pos-decremento: %d \n", y--);
printf("Valor de y na linha seguinte ao pos-decremento: %d \n", y);


printf("\n-------------------Pre-decremento------------------- \n\n");
printf("Valor de y na mesma linha do pre-decremento: %d \n", --y);

return 0;	
	

