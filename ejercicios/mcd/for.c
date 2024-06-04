#include <stdio.h>

int main() {
    int a, b, mcd = 1; // Declarar variables: a y b para los números ingresados, mcd para almacenar el máximo común divisor inicializado en 1

    // Mensaje para solicitar dos números al usuario
    printf("Ingresa dos numeros: ");
    scanf("%d %d", &a, &b); // Leer los dos números ingresados por el usuario y almacenarlos en las variables a y b

    // Encontrar el MCD usando un bucle for
    for (int i = 1; i <= a && i <= b; i++) { // Iniciar el bucle for, desde 1 hasta el menor de los dos números
        if (a % i == 0 && b % i == 0) { // Si i es un divisor común de a y b
            mcd = i; // Actualizar mcd con el valor de i
        }
    }

    // Imprimir el resultado del MCD
    printf("El MCD de %d y %d es: %d\n", a, b, mcd); // Imprimir los números ingresados y su MCD

    return 0; // Indicar que el programa finalizó exitosamente
}
