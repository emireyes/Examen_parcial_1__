#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    
    printf("Ingresa un numero: \n");
    scanf("%lf", &numero);

    printf("Los siguientes 10 numeros son:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%.2lf ", numero + i);
    }
    
    printf("\n");

    return 0;
}

