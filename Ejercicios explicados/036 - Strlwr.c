// Strlwr

// Librer�a
#include <stdio.h>

// Funci�n principal
int main() {
	// Variables
	char palabra[20];
	
	// Pedir palabra
	printf("Escribe una palabra en may%csculas: ",163);
	fflush(stdin);
	gets(palabra);
	
	// Cambio a min�scula
	strlwr(palabra);
	
	// Mostrar cambio
	printf("%s",palabra);
	
	// Cierre
	return 0;
}
