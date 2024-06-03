#include <stdio.h>

int main() {
    int n; // Declaración de la variable n que almacenará el número de términos.
    int producto = 1; // Inicialización de la variable producto con 1, que almacenará el resultado del producto.
    int i = 1; // Inicialización de la variable de control de bucle i con 1.

    // Solicitar al usuario que ingrese el número de términos
    printf("Ingresa el número de términos: ");
    scanf("%d", &n); // Leer el número de términos ingresado por el usuario.

    // Bucle do-while para calcular el producto de la serie geométrica
    do {
        producto *= 2; // Multiplicar el producto por 2 en cada iteración (suponiendo que la razón común es 2).
        i++; // Incrementar i.
    } while (i <= n); // Repetir mientras i sea menor o igual que n.

    // Imprimir el resultado del producto
    printf("El producto de la serie es: %d\n", producto); // Imprimir el resultado del producto.

    return 0; // Indicar que el programa ha finalizado con éxito.
}
