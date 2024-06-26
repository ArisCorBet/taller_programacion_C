#include <stdio.h>

int main() {
    int num, esPrimo = 1; // 1 significa verdadero, 0 significa falso

    // Leer el número
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    // Verificar si el número es primo usando un bucle for
    if (num <= 1) {
        esPrimo = 0; // Los números menores o iguales a 1 no son primos
    } else {
        // Verificar divisores desde 2 hasta num/2
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                esPrimo = 0; // Encontró un divisor, el número no es primo
                break; // No necesita verificar más divisores
            }
        }
    }

    // Imprimir el resultado
    if (esPrimo) {
        printf("%d es un numero primo\n", num); // Si esPrimo sigue siendo 1, el número es primo
    } else {
        printf("%d no es un numero primo\n", num); // Si esPrimo es 0, el número no es primo
    }

    return 0; // Finalizar el programa
}
