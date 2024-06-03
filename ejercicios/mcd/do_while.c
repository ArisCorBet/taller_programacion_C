#include <stdio.h>

int main() {
    int a, b, mcd, i = 1; // Declarar variables: a y b para los números ingresados, mcd para almacenar el máximo común divisor, e i como contador inicializado en 1

    // Mensaje para solicitar dos números al usuario
    printf("Ingresa dos números: ");
    scanf("%d %d", &a, &b); // Leer los dos números ingresados por el usuario y almacenarlos en las variables a y b

    // Encontrar el MCD usando un bucle do-while
    do {
        if (a % i == 0 && b % i == 0) { // Si i es un divisor común de a y b
            mcd = i; // Actualizar mcd con el valor de i
        }
        i++; // Incrementar i
    } while (i <= a && i <= b); // Repetir el bucle mientras i sea menor o igual que a y b

    // Imprimir el resultado del MCD
    printf("El MCD de %d y %d es: %d\n", a, b, mcd); // Imprimir los números ingresados y su MCD

    return 0; // Indicar que el programa finalizó exitosamente
}
