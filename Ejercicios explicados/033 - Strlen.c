// Strlen

// Librer�as
#include <stdio.h>

// Funci�n principal
int main() {
	// Variables
	char palabra[20];
	int contar;
	
	// Imprimir
	printf("Introduce una palabra: ");
	fflush(stdin);
	gets(palabra);
	
	// C�lculo
	contar = strlen(palabra);
	
	// Imprimir c�lculo
	printf("%s tiene %d letras.\n",palabra,contar);
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
