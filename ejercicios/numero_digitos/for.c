#include <stdio.h>

int main() {
    int num, count = 0; // Declarar variables: num para el número ingresado por el usuario, count para contar los dígitos, inicializado en 0

    // Mensaje para solicitar un número al usuario
    printf("Ingresa un número: ");
    scanf("%d", &num); // Leer el número ingresado por el usuario y almacenarlo en la variable num

    // Contar los dígitos usando un bucle for
    for (; num != 0; num /= 10) { // Iniciar el bucle for sin inicialización, continuar mientras num no sea 0, y dividir num entre 10 en cada iteración
        count++; // Incrementar el contador de dígitos
    }

    // Imprimir el resultado del conteo de dígitos
    printf("El número tiene %d dígitos\n", count); // Imprimir la cantidad de dígitos

    return 0; // Indicar que el programa finalizó exitosamente
}
