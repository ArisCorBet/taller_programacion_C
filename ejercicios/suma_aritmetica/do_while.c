#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida para utilizar printf y scanf.

int main() {
    int n, suma = 0, i = 1; // Declaración de variables: n para el número de términos, suma para almacenar el resultado y i para el contador.

    // Leer el número de términos
    printf("Ingresa el número de términos: "); // Solicita al usuario que ingrese el número de términos.
    scanf("%d", &n); // Lee el número de términos ingresado por el usuario y lo almacena en la variable n.

    // Mostrar la serie aritmética y calcular la suma usando un bucle do-while
    printf("La serie es: "); // Imprime el encabezado de la serie.
    do {
        printf("%d", i); // Imprime el valor actual de i.
        if (i < n) {
            printf(" + "); // Imprime el símbolo '+' entre los términos de la serie.
        }
        suma += i; // Suma el valor de i a la variable suma.
        i++; // Incrementa el valor de i en 1 para pasar al siguiente término.
    } while (i <= n); // La condición del bucle: se ejecutará mientras i sea menor o igual que n.

    // Imprimir el resultado
    printf("\nLa suma de la serie es: %d\n", suma); // Imprime el resultado de la suma.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
