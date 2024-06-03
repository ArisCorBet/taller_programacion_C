#include <stdio.h> // Incluir la biblioteca estándar de entrada y salida

int main() {
    int num, factorial = 1, i = 1; // Declarar variables: num para el número ingresado, factorial para almacenar el resultado del factorial, e i como contador inicializado en 1

    // Mensaje para solicitar un número al usuario
    printf("Ingresa un número: ");
    scanf("%d", &num); // Leer el número ingresado por el usuario y almacenarlo en la variable num

    // Calcular el factorial usando un bucle do-while
    do {
        factorial *= i; // Multiplicar el valor actual de factorial por el valor actual de i y almacenar el resultado en factorial
        i++; // Incrementar i en 1 para pasar al siguiente número en el cálculo del factorial
    } while (i <= num); // Repetir el bucle mientras i sea menor o igual que el número ingresado por el usuario

    // Imprimir el resultado del factorial
    printf("El factorial de %d es: %d\n", num, factorial); // Imprimir el número ingresado y su factorial

    return 0; // Indicar que el programa finalizó exitosamente
}
