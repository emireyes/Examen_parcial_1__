#include <stdio.h>

int main() {
    int N;
    printf("Ingrese la cantidad de numeros a sumar: ");
    scanf("%d", &N);

    int suma = 0;
    for (int i = 1; i <= N; i++) {
        int numero;
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &numero);
        suma += numero;
    }

    printf("La suma de los %d numeros es: %d\n", N, suma);

    return 0;
}

