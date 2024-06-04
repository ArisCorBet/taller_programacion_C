#include <stdio.h>

int main() {
    int num;
    int i = 2;
    int esPrimo = 1; // 1 para verdadero (es primo), 0 para falso (no es primo)

    // Leer el número
    printf("Ingresa un numero: ");
    scanf("%d", &num);

    // Verificar si el número es primo usando un bucle do-while
    if (num <= 1) {
        esPrimo = 0; // Los números menores o iguales a 1 no son primos
    } else {
        do {
            // Si el número es divisible por i, entonces no es primo
            if (num % i == 0) {
                esPrimo = 0; // Cambiar esPrimo a 0 si encontramos un divisor
            }
            i++; // Incrementar i para probar el siguiente posible divisor
        } while (i <= num / 2 && esPrimo); // Continuar hasta la mitad del número o hasta encontrar un divisor
    }

    // Imprimir el resultado
    if (esPrimo) {
        printf("%d es un numero primo\n", num);
    } else {
        printf("%d no es un numero primo\n", num);
    }

    return 0;
}
