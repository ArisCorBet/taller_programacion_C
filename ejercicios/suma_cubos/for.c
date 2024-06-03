#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida para usar las funciones printf y scanf.

int main() {
    int n; // Variable para almacenar el número ingresado por el usuario.
    int suma = 0; // Variable para almacenar la suma de los cubos.
    
    // Leer el valor de n
    printf("Ingresa un número: "); // Solicita al usuario que ingrese un número.
    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en la variable n.

    // Calcular la suma de los cubos usando un bucle for
    for (int i = 1; i <= n; i++) { // Inicia un bucle for que itera desde 1 hasta n.
        suma += i * i * i; // Agrega el cubo del número actual a la suma total.
    }

    // Imprimir el resultado
    printf("La suma de los cubos de los primeros %d números es: %d\n", n, suma); // Imprime la suma de los cubos.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
