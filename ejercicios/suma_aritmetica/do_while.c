#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida para utilizar printf y scanf.

int main() {
    int n, suma = 0, i = 1; // Declaración de variables: n para el número de términos, suma para almacenar el resultado y i para el contador.

    // Leer el número de términos
    printf("Ingresa el número de términos: "); // Solicita al usuario que ingrese el número de términos.
    scanf("%d", &n); // Lee el número de términos ingresado por el usuario y lo almacena en la variable n.

    // Calcular la suma de la serie aritmética usando un bucle do-while
    do {
        suma += i; // Suma el valor de i a la variable suma.
        i++; // Incrementa el valor de i en 1 para pasar al siguiente término.
    } while (i <= n); // La condición del bucle: se ejecutará mientras i sea menor o igual que n.

    // Imprimir el resultado
    printf("La suma de la serie es: %d\n", suma); // Imprime el resultado de la suma.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
