#include <stdio.h> // Incluir la biblioteca estándar de entrada y salida

int main() {
    int n, i = 2; // Declarar variables: n para la cantidad de elementos de la serie, e i como contador inicializado en 2

    // Mensaje para solicitar la cantidad de elementos de la serie Fibonacci al usuario
    printf("Ingresa la cantidad de elementos de la serie Fibonacci: ");
    scanf("%d", &n); // Leer la cantidad de elementos ingresada por el usuario y almacenarla en la variable n

    // Imprimir los primeros n elementos de la serie Fibonacci usando un bucle do-while
    int a = 0, b = 1; // Inicializar los primeros dos elementos de la serie Fibonacci: a y b
    printf("%d %d", a, b); // Imprimir los dos primeros elementos de la serie
    do {
        int temp = a + b; // Calcular el siguiente elemento de la serie Fibonacci
        printf(" %d", temp); // Imprimir el siguiente elemento de la serie
        a = b; // Actualizar el valor de a con el valor de b
        b = temp; // Actualizar el valor de b con el valor calculado temp
        i++; // Incrementar el contador
    } while (i < n); // Repetir el bucle mientras no se hayan impreso los n elementos de la serie
    printf("\n"); // Imprimir una nueva línea al final

    return 0; // Indicar que el programa finalizó exitosamente
}
