// SENTENCIAS ANIDADAS

// LIBRER�AS
#include <stdio.h>

// FUNCI�N PRINCIPAL
int main() {
	int numero;
	
	numero = 0;
	
	while(numero < 11) {
		if(numero % 2 == 0) {
			printf("%d.\n",numero);
		}
		numero++;
	}
	
	printf("Presiona una tecla para terminar...");
	getch();
	return 0;
}
