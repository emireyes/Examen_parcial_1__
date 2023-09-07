//progrma que te da 20 nueros mas del que le pides 
#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    int i = 1; 

    printf("Ingresa un numero: \n");
    scanf("%lf", &numero);

    printf("Los siguientes 10 numeros son:\n");

    while (i <= 10) { 
        printf("%.2lf ", numero + i);
        i++; 
    }
    
    printf("\n");

    return 0;
}


