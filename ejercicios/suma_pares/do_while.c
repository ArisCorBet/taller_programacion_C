#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida para usar las funciones printf y scanf.

int main() { // Función principal del programa.
    int n, suma = 0, i = 2; // Declaración de variables: n para almacenar el número ingresado por el usuario, suma para almacenar la suma de los números pares, e i como un contador inicializado en 2.

    // Leer el valor de n
    printf("Ingresa un número: "); // Solicita al usuario que ingrese un número.
    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en la variable n.

    // Sumar los números pares usando un bucle do while
    do { // Inicia un bucle do-while.
        suma += i; // Suma el valor actual de i a la variable suma.
        i += 2; // Incrementa i en 2 para pasar al siguiente número par.
    } while (i <= n); // Continúa el bucle mientras i sea menor o igual que n.

    // Imprimir el resultado
    printf("La suma de los números pares hasta %d es: %d\n", n, suma); // Imprime la suma de los números pares hasta n.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
