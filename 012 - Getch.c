// GETCH

#include <stdio.h>
#include <conio.h>

int main() {
	char letra;
	
	// Obtenemos un caracter por teclado y lo mostramos
	letra = getch();
	putchar(letra);
	
	// Hacemos una pausa hasta que el usuario presione Intro
	fflush(stdin);
	printf("\nPresiona una tecla para terminar...");	
	getch();
	
	return 0;
}
