// Fwrite

// Librer�a
#include <stdio.h>

// Funci�n principal
int main() {
	// Archivo *variable
	FILE *archivo;
	// Variable = abrir archivo
	archivo = fopen("archivo.txt","wt");
	// Comprobar si se abre
	if(archivo == NULL) {
		printf("No se ha podido abrir el archivo.\n\n");
	}
	
	// Variable
	char letra = 'H';
	
	// Insertar car�cter
	fputc('H',archivo);
	
	// Insertar cadena de texto
	fputs("\nHola mundo!\n",archivo);
	
	// Coger la letra, comprobar su tama�o, y escribirlo
	fwrite(&letra,sizeof(letra),1,archivo);
	
	// Cerrar archivo
	fclose(archivo);
	
	// Cierre
	printf("Pulsa una tecla para finalizar...");
	fflush(stdin);
	getch();
	return 0;
}
