#include <stdio.h>

int main() {
    int n, i = 1; // Declaración e inicialización de la variable n que almacenará el número de términos, y la variable i que se utilizará como contador en el bucle.
    float producto = 1.0; // Declaración e inicialización de la variable producto con 1.0, que almacenará el resultado del producto.

    // Leer el valor de n
    printf("Ingresa un número: ");
    scanf("%d", &n); // Leer el número ingresado por el usuario.

    // Verificar si n es mayor que 0 para evitar divisiones por cero
    if (n > 0) {
        // Calcular el producto de la serie fraccionaria usando un bucle do while
        do {
            producto *= 1.0 / i; // Multiplicar el producto por 1/i en cada iteración, donde i es el valor actual del contador.
            i++; // Incrementar el contador en cada iteración.
        } while (i <= n); // Continuar el bucle mientras i sea menor o igual que n.
    }

    // Imprimir el resultado del producto
    printf("El producto de la serie es: %.6f\n", producto); // Imprimir el resultado del producto con 6 decimales de precisión.

    return 0; // Indicar que el programa ha finalizado con éxito.
}
