// Copia cadena de car�cteres

// Librer�a
#include <stdio.h>
#include <string.h>

// Funci�n principal
int main() {
	// Declaraci�n variables
	int i;
	char palabra[10], palabra2[10];
	
	// Declaraci�n variables
	printf("Introduce una palabra: ");
	gets(palabra);
	
	// Copia palabra
	strcpy(palabra2,palabra);
	
	// muestra palabra2
	printf("%s.",palabra2);
	
	// Cierre
	return 0;
}
