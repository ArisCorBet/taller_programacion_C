#include <stdio.h>

int main() {
    int num, count = 0; // Declarar variables: num para el número ingresado por el usuario, count para contar los dígitos, inicializado en 0

    // Mensaje para solicitar un número al usuario
    printf("Ingresa un número: ");
    scanf("%d", &num); // Leer el número ingresado por el usuario y almacenarlo en la variable num

    // Contar los dígitos usando un bucle do-while
    do {
        count++; // Incrementar el contador de dígitos
        num /= 10; // Eliminar el último dígito del número
    } while (num != 0); // Repetir el bucle mientras num no sea 0

    // Imprimir el resultado del conteo de dígitos
    printf("El número tiene %d dígitos\n", count); // Imprimir la cantidad de dígitos

    return 0; // Indicar que el programa finalizó exitosamente
}
