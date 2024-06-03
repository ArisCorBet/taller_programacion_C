#include <stdio.h>

int main() {
    int num, i = 2;
    int esPrimo = 1; // 1 significa verdadero, 0 significa falso

    // Leer el número
    printf("Ingresa un número: ");
    scanf("%d", &num);

    // Verificar si el número es primo usando un bucle while
    if (num <= 1) {
        esPrimo = 0; // Los números menores o iguales a 1 no son primos
    } else {
        // Verificar divisores desde 2 hasta num/2
        while (i <= num / 2) {
            if (num % i == 0) {
                esPrimo = 0; // Encontró un divisor, el número no es primo
            }
            i++; // Incrementar el valor de i para probar el siguiente divisor
        }
    }

    // Imprimir el resultado
    if (esPrimo) {
        printf("%d es un número primo\n", num); // Si esPrimo sigue siendo 1, el número es primo
    } else {
        printf("%d no es un número primo\n", num); // Si esPrimo es 0, el número no es primo
    }

    return 0; // Finalizar el programa
}
