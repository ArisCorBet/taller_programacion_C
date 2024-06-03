#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida para usar las funciones printf y scanf.

int main() { // Función principal del programa.
    int n, suma = 0, i = 1; // Declaración de variables: n para almacenar el número ingresado por el usuario, suma para almacenar la suma de los números impares, e i como un contador inicializado en 1.

    // Leer el valor de n
    printf("Ingresa un número: "); // Solicita al usuario que ingrese un número.
    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en la variable n.

    // Sumar los números impares usando un bucle while
    while (i <= n) { // Inicia un bucle while. Continuará mientras i sea menor o igual que n.
        suma += i; // Suma el valor actual de i a la variable suma.
        i += 2; // Incrementa i en 2 en cada iteración para pasar al siguiente número impar.
    }

    // Imprimir el resultado
    printf("La suma de los números impares hasta %d es: %d\n", n, suma); // Imprime la suma de los números impares hasta n.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
