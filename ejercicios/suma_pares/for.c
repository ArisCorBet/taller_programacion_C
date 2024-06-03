#include <stdio.h> // Esta línea incluye la biblioteca estándar de entrada y salida, que proporciona las funciones necesarias para leer y escribir datos.

int main() { // Esta es la función principal del programa. La ejecución del programa comienza desde aquí.
    int n, suma = 0; // Se declaran dos variables enteras: n para almacenar el número ingresado por el usuario, y suma para almacenar la suma de los números pares.

    // Leer el valor de n
    printf("Ingresa un número: "); // Imprime un mensaje solicitando al usuario que ingrese un número.
    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en la variable n.

    // Sumar los números pares usando un bucle for
    for (int i = 2; i <= n; i += 2) { // Inicia un bucle for. El contador i se inicializa en 2, y el bucle se ejecutará mientras i sea menor o igual que n. En cada iteración, i se incrementa en 2 para pasar al siguiente número par.
        suma += i; // Añade el valor de i a la variable suma. Esto acumula la suma de los números pares.
    }

    // Imprimir el resultado
    printf("La suma de los números pares hasta %d es: %d\n", n, suma); // Imprime el resultado de la suma de los números pares hasta n.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
