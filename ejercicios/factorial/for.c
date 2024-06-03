#include <stdio.h> // Incluir la biblioteca estándar de entrada y salida

int main() {
    int num, factorial = 1; // Declarar variables: num para el número ingresado, y factorial para almacenar el resultado del factorial, inicializado en 1

    // Mensaje para solicitar un número al usuario
    printf("Ingresa un número: ");
    scanf("%d", &num); // Leer el número ingresado por el usuario y almacenarlo en la variable num

    // Calcular el factorial usando un bucle for
    for (int i = 1; i <= num; i++) { // Inicializar i en 1; mientras i sea menor o igual que el número ingresado, incrementar i en cada iteración
        factorial *= i; // Multiplicar el valor actual de factorial por el valor actual de i y almacenar el resultado en factorial
    }

    // Imprimir el resultado del factorial
    printf("El factorial de %d es: %d\n", num, factorial); // Imprimir el número ingresado y su factorial

    return 0; // Indicar que el programa finalizó exitosamente
}
