#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida para usar las funciones printf y scanf.

int main() {
    int n; // Variable para almacenar el número ingresado por el usuario.
    int suma = 0; // Variable para almacenar la suma de los cuadrados.
    int i = 1; // Variable de control para el bucle while.

    // Leer el valor de n
    printf("Ingresa un número: "); // Solicita al usuario que ingrese un número.
    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en la variable n.

    // Calcular la suma de los cuadrados usando un bucle while
    while (i <= n) { // Inicia un bucle while. Se ejecutará mientras i sea menor o igual que n.
        suma += i * i; // Agrega el cuadrado del número actual a la suma total.
        i++; // Incrementa el valor de i para pasar al siguiente número.
    }

    // Imprimir el resultado
    printf("La suma de los cuadrados de los primeros %d números es: %d\n", n, suma); // Imprime la suma de los cuadrados.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
