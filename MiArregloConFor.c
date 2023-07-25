#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Esta variable de tipo entero guarada un arreglo de 5 numeros*/
	int miArreglo[5];
	
	miArreglo[0] = 4;
	miArreglo[1] = 5;
	miArreglo[2] = 2;
	miArreglo[3] = 8;
	miArreglo[4] = 6;
	
	/*printf("%i\n", miArreglo[0]);
	printf("%i\n", miArreglo[1]);
	printf("%i\n", miArreglo[2]);
	printf("%i\n", miArreglo[3]);
	printf("%i\n", miArreglo[4]);*/
	
	/*Esta variable inicializa un contador*/
	int contador;
	
	for(contador=0; contador<5; contador++){
		printf("%i\n", miArreglo[contador]);
		//printf("%i", contador);
	}
	
	printf("\n");
	
	/*Esta variable de caracter entero guarada un arreglo de 5 caracteres*/
	char nombre[5];
	
	nombre[0] = 'M';
	nombre[1] = 'A';
	nombre[2] = 'R';
	nombre[3] = 'C';
	nombre[4] = 'O';
	
	for(contador=0; contador<5; contador++){
		printf("%c\n", nombre[contador]);
	}

	return 0;
}
