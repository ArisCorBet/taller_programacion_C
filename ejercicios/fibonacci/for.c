#include <stdio.h> // Incluir la biblioteca estándar de entrada y salida

int main() {
    int n; // Declarar variable: n para la cantidad de elementos de la serie

    // Mensaje para solicitar la cantidad de elementos de la serie Fibonacci al usuario
    printf("Ingresa la cantidad de elementos de la serie Fibonacci: ");
    scanf("%d", &n); // Leer la cantidad de elementos ingresada por el usuario y almacenarla en la variable n

    // Imprimir los primeros n elementos de la serie Fibonacci usando un bucle for
    int a = 0, b = 1; // Inicializar los primeros dos elementos de la serie Fibonacci: a y b
    printf("%d %d", a, b); // Imprimir los dos primeros elementos de la serie
    for (int i = 2; i < n; i++) { // Iniciar el bucle for desde el tercer elemento hasta el elemento n-1 de la serie
        int temp = a + b; // Calcular el siguiente elemento de la serie Fibonacci
        printf(" %d", temp); // Imprimir el siguiente elemento de la serie
        a = b; // Actualizar el valor de a con el valor de b
        b = temp; // Actualizar el valor de b con el valor calculado temp
    }
    printf("\n"); // Imprimir una nueva línea al final

    return 0; // Indicar que el programa finalizó exitosamente
}
