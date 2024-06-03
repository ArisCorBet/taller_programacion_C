#include <stdio.h>

int main() {
    int n; // Declaración de la variable n que almacenará el número de términos.
    float producto = 1.0; // Declaración e inicialización de la variable producto con 1.0, que almacenará el resultado del producto.

    // Leer el valor de n
    printf("Ingresa un número: ");
    scanf("%d", &n); // Leer el número ingresado por el usuario.

    // Calcular el producto de la serie fraccionaria usando un bucle for
    for (int i = 1; i <= n; i++) { // Inicializar el contador i en 1; continuar el bucle mientras i sea menor o igual que n; incrementar i en cada iteración.
        producto *= 1.0 / i; // Multiplicar el producto por 1/i en cada iteración, donde i es el valor actual del contador.
    }

    // Imprimir el resultado del producto
    printf("El producto de la serie es: %.6f\n", producto); // Imprimir el resultado del producto con 6 decimales de precisión.

    return 0; // Indicar que el programa ha finalizado con éxito.
}
