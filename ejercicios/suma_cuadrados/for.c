#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida para usar las funciones printf y scanf.

int main() {
    int n; // Variable para almacenar el número ingresado por el usuario.
    int suma = 0; // Variable para almacenar la suma de los cuadrados.

    // Leer el valor de n
    printf("Ingresa un número: "); // Solicita al usuario que ingrese un número.
    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en la variable n.

    // Calcular la suma de los cuadrados usando un bucle for
    for (int i = 1; i <= n; i++) { // Inicia un bucle for. i se inicializa en 1 y se incrementa en cada iteración hasta que sea igual a n.
        suma += i * i; // Agrega el cuadrado del número actual a la suma total.
    }

    // Imprimir el resultado
    printf("La suma de los cuadrados de los primeros %d números es: %d\n", n, suma); // Imprime la suma de los cuadrados.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
