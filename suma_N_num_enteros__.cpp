//programa que te suma todos los enteros del 0 hasta el numero que le pidas 
#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    int suma = 0;
    int i = 1;

    while (i <= numero) {
        suma += i;
        i++;
    }

    printf("La suma de los enteros desde 1 hasta %d es: %d\n", numero, suma);

    return 0;
}


