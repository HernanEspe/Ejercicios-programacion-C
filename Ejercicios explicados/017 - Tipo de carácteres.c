// TIPO DE CAR�CTERES

#include <stdio.h>

// FUNCI�N PRINCIPAL
int main() {
	int entero = 8;
	float real = 2.5;
	char caracter = 'H';
	
	printf("%c\n",caracter); // Tipo caracter
	printf("%d\n",entero); // Tipo entero
	printf("%f\n",real); // Tipo real
	printf("%.2f\n",real); // Tipo real con dos d�gitos de precisi�n
	printf("%10d\n",entero); // Tipo entero con diez d�gitos
	printf("%10f\n",real); // Tipo real con diez d�gitos
	printf("%p\n",&caracter); // Direcci�n de memoria de tipo caracter
		
	printf("Presiona una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
