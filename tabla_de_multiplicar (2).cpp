//programa que le pides cualquier tabla de multiplicar y te la da hasta el x10
#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero para generar la tabla de multiplicar: ");
    scanf("%d", &numero);

    printf("Tabla de multiplicar del %d:\n", numero);

    int i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }

    return 0;
}

