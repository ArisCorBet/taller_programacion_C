#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida para usar las funciones printf y scanf.

int main() { // Función principal del programa.
    int n; // Declaración de la variable n para almacenar el número ingresado por el usuario.
    float suma = 0.0; // Variable para almacenar la suma de la serie fraccionaria, inicializada en 0.0 para evitar errores de tipo en la operación.

    // Leer el valor de n
    printf("Ingresa un número: "); // Solicita al usuario que ingrese un número.
    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en la variable n.

    // Calcular la suma de la serie fraccionaria usando un bucle for
    for (int i = 1; i <= n; i++) { // Inicia un bucle for. El contador i se inicializa en 1 y se incrementa en cada iteración hasta llegar a n.
        suma += 1.0 / i; // Agrega el inverso de i a la variable suma.
    }

    // Imprimir el resultado
    printf("La suma de la serie es: %.2f\n", suma); // Imprime la suma de la serie fraccionaria, con dos decimales de precisión.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
