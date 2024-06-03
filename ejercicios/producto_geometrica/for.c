#include <stdio.h>

int main() {
    int n; // Declaración de la variable n que almacenará el número de términos.
    int producto = 1; // Inicialización de la variable producto con 1, que almacenará el resultado del producto.

    // Solicitar al usuario que ingrese el número de términos
    printf("Ingresa el número de términos: ");
    scanf("%d", &n); // Leer el número de términos ingresado por el usuario.

    // Bucle for para calcular el producto de la serie geométrica
    for (int i = 1; i <= n; i++) { // Inicialización de i en 1; el bucle se ejecutará mientras i sea menor o igual que n; se incrementará i en cada iteración.
        producto *= 2; // Multiplicar el producto por 2 en cada iteración (suponiendo que la razón común es 2).
    }

    // Imprimir el resultado del producto
    printf("El producto de la serie es: %d\n", producto); // Imprimir el resultado del producto.

    return 0; // Indicar que el programa ha finalizado con éxito.
}
