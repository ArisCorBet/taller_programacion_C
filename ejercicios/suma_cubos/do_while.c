#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida para usar las funciones printf y scanf.

int main() {
    int n; // Variable para almacenar el número ingresado por el usuario.
    int suma = 0; // Variable para almacenar la suma de los cubos.
    int i = 1; // Variable para iterar sobre los números desde 1 hasta n.

    // Leer el valor de n
    printf("Ingresa un numero: "); // Solicita al usuario que ingrese un número.
    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en la variable n.

    // Calcular la suma de los cubos usando un bucle do while
    do { // Inicia un bucle do-while. Se ejecutará al menos una vez.
        suma += i * i * i; // Agrega el cubo del número actual a la suma total.
        i++; // Incrementa el valor de i para pasar al siguiente número.
    } while (i <= n); // Continúa el bucle mientras i sea menor o igual que n.

    // Imprimir el resultado
    printf("La suma de los cubos de los primeros %d numeros es: %d\n", n, suma); // Imprime la suma de los cubos.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
