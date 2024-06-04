#include <stdio.h>

int main() {
    int n, triangular = 0, i = 1; // Declarar variables: n para el número ingresado por el usuario, triangular para almacenar el número triangular, e i como contador inicializado en 1

    // Mensaje para solicitar un número al usuario
    printf("Ingresa un numero: ");
    scanf("%d", &n); // Leer el número ingresado por el usuario y almacenarlo en la variable n

    // Calcular el número triangular usando un bucle while
    while (i <= n) { // Continuar el bucle mientras i sea menor o igual que n
        triangular += i; // Sumar el valor de i a triangular
        i++; // Incrementar i
    }

    // Imprimir el resultado del número triangular
    printf("El numero triangular %d-esimo es: %d\n", n, triangular); // Imprimir el valor de n y el número triangular correspondiente

    return 0; // Indicar que el programa finalizó exitosamente
}
