// Strupr

// Librer�a
#include <stdio.h>

// Funci�n principal
int main() {
	// Variables
	char palabra[20];
	
	// Insertar palabra
	printf("Introduce una palabra en min�scula: ");
	fflush(stdin);
	gets(palabra);
	
	// Cambio a may�scula
	strupr(palabra);
	
	// Imprimir palabra
	printf("%s",palabra);
	
	// Cierre
	return 0;
}
