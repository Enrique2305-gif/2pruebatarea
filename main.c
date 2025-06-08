#include "funciones.h"

int main(void) {
	const char *nombre = "elephant.txt";
    	double promedio = calcular_promedio(nombre);
   	printf("El promedio de los pesos es: %.2f\n", promedio);
    	return 0;
}
