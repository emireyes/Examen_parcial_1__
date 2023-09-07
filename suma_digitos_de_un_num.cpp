//programa para sumar los digitos de un numero

#include <stdio.h>

int main() {
    int numero, suma = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);


    if (numero < 0) {
        numero = -numero;
    }

    while (numero > 0) {
        int digito = numero % 10; 
        suma += digito;          
        numero /= 10;           
    }

    printf("La suma de los digitos es: %d\n", suma);

    return 0;
}

