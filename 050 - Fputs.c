// Fputs

// Librer�a
#include <stdio.h>

// Funci�n principal
int main() {
	// Archivo *variable
	FILE *archivo;
	// Variable = abrir archivo
	archivo = fopen("archivo.txt","w");
	// Comprobar si se abre
	if(archivo == NULL) {
		printf("No se ha podido abrir el archivo.\n\n");
	}
	
	// Insertar car�cter
	fputc('H',archivo);
	
	// Insertar cadena de texto
	fputs("\nHola mundo!",archivo);
	
	// Cerrar archivo
	fclose(archivo);
	
	// Cierre
	printf("Pulsa una tecla para finalizar...");
	fflush(stdin);
	getch();
	return 0;
}
