// VARIOS VALORES EN UNA L�NEA

#include <stdio.h>

// FUNCI�N PRINCIPAL
int main() {
	int numero = 72;
	
	printf("%d, %c, %o, %x y %.2f\n",numero,numero,numero,numero,numero); // Tipo entero en varias l�neas
	
	printf("Presiona una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
