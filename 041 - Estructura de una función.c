// Estructura de una funci�n

// Librer�a
#include <stdio.h>

// Otras funciones
void funcion();

// Funci�n principal
int main() {
	// Llamada a funci�n secundaria
	funcion();
	
	// Cierre
	printf("Pulse una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
// Funci�n secundaria
void funcion() {
	printf("\t================\n");
	printf("\t=              =\n");
	printf("\t= Hello World! =\n");
	printf("\t=              =\n");
	printf("\t================\n\n");
}
