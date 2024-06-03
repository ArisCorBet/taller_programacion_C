#include <stdio.h>

int main() {
    int num, raiz = 0, suma = 0; // Declaración de variables: num es el número ingresado, raiz almacenará el valor de la raíz cuadrada, suma llevará la suma acumulada de los números impares.
    int i = 0; // Inicialización de un contador i en 0.

    // Leer el número
    printf("Ingresa un número: "); // Imprimir mensaje solicitando al usuario ingresar un número.
    scanf("%d", &num); // Leer el número ingresado por el usuario y almacenarlo en la variable num.

    // Calcular la raíz cuadrada usando restas sucesivas con un bucle while
    while (suma <= num) { // Repetir el bucle mientras la suma acumulada sea menor o igual al número original.
        suma += (2 * i + 1); // Sumar los números impares: i * 2 + 1 genera una secuencia de números impares. Sumamos estos números a la variable suma.
        if (suma <= num) { // Comprobar si la suma acumulada es menor o igual al número original.
            raiz++; // Incrementar raiz si la suma acumulada es menor o igual al número original, lo que indica que estamos dentro de los límites de la raíz cuadrada.
        }
        i++; // Incrementar el contador i.
    }

    // Imprimir el resultado
    printf("La raíz cuadrada aproximada es: %d\n", raiz); // Imprimir el valor aproximado de la raíz cuadrada.

    return 0; // Indicar que el programa ha finalizado con éxito.
}
