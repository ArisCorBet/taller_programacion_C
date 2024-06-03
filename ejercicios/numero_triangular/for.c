#include <stdio.h>

int main() {
    int n, triangular = 0; // Declarar variables: n para el número ingresado por el usuario, triangular para almacenar el número triangular

    // Mensaje para solicitar un número al usuario
    printf("Ingresa un número: ");
    scanf("%d", &n); // Leer el número ingresado por el usuario y almacenarlo en la variable n

    // Calcular el número triangular usando un bucle for
    for (int i = 1; i <= n; i++) { // Iniciar el bucle for desde 1 hasta n inclusive
        triangular += i; // Sumar el valor de i a triangular
    }

    // Imprimir el resultado del número triangular
    printf("El número triangular %d-ésimo es: %d\n", n, triangular); // Imprimir el valor de n y el número triangular correspondiente

    return 0; // Indicar que el programa finalizó exitosamente
}
