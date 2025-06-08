#include"funciones.h"

double calcular_promedio(const char *filename) {
	double suma = 0.0;
    	long contador = 0;
    	double valor;

	while (scanf("%lf", &valor) == 1) {
        suma += valor;
        contador++;
    }

    return (contador > 0) ? (suma / contador) : 0.0;


}
