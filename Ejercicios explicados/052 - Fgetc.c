// Fgetc

// Librer�a
#include <stdio.h>

// Funci�n principal
int main() {
	// Archivo *variable
	FILE *archivo;
	// Variable = abrir archivo
	archivo = fopen("archivo.txt","rt");
	// Comprobar si se abre
	if(archivo == NULL) {
		printf("No se ha podido abrir el archivo.\n\n");
	}
	
	// Variable
	char letra = 'H';
	
	// Leer un car�cter
	letra = fgetc(archivo);
	
	// Mostrar car�cter le�do en pantalla
	printf("%c.\n\n",letra);
	
	// Cerrar archivo
	fclose(archivo);
	
	// Cierre
	printf("Pulsa una tecla para finalizar...");
	fflush(stdin);
	getch();
	return 0;
}
