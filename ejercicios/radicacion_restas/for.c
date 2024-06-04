#include <stdio.h>

int main() {
    int numero; // Variable para almacenar el número ingresado por el usuario
    int resultado = 0; // Variable para almacenar el resultado de la raíz cúbica
    int acumulado = 0; // Variable para almacenar el acumulado de las sumas sucesivas

    // Solicita al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero); // Lee el número ingresado por el usuario y lo almacena en la variable 'numero'

    // Bucle 'for' para calcular la raíz cúbica mediante restas sucesivas
    for (int i = 1; acumulado < numero; ++i) {
        acumulado += (3 * resultado * resultado) + (3 * resultado) + 1; // Actualiza el acumulado con la fórmula
        if (acumulado <= numero) { // Verifica si el acumulado no supera el número
            resultado++; // Incrementa el resultado si la condición se cumple
        }
    }

    // Imprime el resultado
    printf("La raiz cubica de %d es %d\n", numero, resultado);
    return 0; // Termina el programa
}
