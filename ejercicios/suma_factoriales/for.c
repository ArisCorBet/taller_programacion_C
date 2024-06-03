#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida para usar las funciones printf y scanf.

// Función para calcular el factorial de un número
int factorial(int num) {
    int fact = 1; // Inicializa el factorial como 1.
    for (int i = 1; i <= num; i++) { // Inicia un bucle for desde 1 hasta el número dado.
        fact *= i; // Multiplica el factorial actual por el valor de i.
    }
    return fact; // Retorna el factorial calculado.
}

int main() { // Función principal del programa.
    int n, suma = 0; // Declaración de variables: n para almacenar el número ingresado por el usuario, y suma para almacenar la suma de los factoriales.

    // Leer el valor de n
    printf("Ingresa un número: "); // Solicita al usuario que ingrese un número.
    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en la variable n.

    // Calcular la suma de los factoriales usando un bucle for
    for (int i = 1; i <= n; i++) { // Inicia un bucle for desde 1 hasta n.
        suma += factorial(i); // Agrega el factorial del número actual a la variable suma.
    }

    // Imprimir el resultado
    printf("La suma de los factoriales de los primeros %d números es: %d\n", n, suma); // Imprime la suma de los factoriales de los primeros n números.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
