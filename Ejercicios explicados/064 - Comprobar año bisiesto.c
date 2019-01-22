// Comprobar a�o bisiesto

// Librer�as
#include <stdio.h>

// Funci�n principal
int main() {
	// Declaraci�n de variables
	int anio;
	
	// T�tulo
	printf("\t================\n");
	printf("\t=               =\n");
	printf("\t= A%CO BISIESTO =\n",164);
	printf("\t=               =\n");
	printf("\t================\n\n");
	
	// Solicitar a�o
	printf("\tIntroduzca un a%co: ",164);
	fflush(stdin);
	scanf("%d",&anio);
	printf("\n");
	
	// Comprobar a�o
	if((anio >= 0) && (anio <= 2100)) {
		// Comprobar si es bisiesto
		if(anio % 400 == 0) {
			printf("\tEl a%co %d s%c es bisiesto.\n\n",164,anio,161);
		} else {
			printf("\tEl a%co %d no es bisiesto.\n\n",164,anio);
		}
	} else {
		printf("No has introducido un a%co correcto.\n\n",164);
		
	}
	
	// Cierre
	printf("Pulsa una tecla para terminar...");
	fflush(stdin);
	getch();
	return 0;
}
