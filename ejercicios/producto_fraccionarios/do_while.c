#include <stdio.h>

int main() {
    int n;  // Declara una variable para almacenar el valor de n
    double producto = 1.0;  // Inicializa el producto en 1.0, tipo double para manejar decimales
    int i = 1;  // Inicializa el contador

    // Pide al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);  // Lee el valor de n desde el teclado

    // Verifica que n sea mayor que 0
    if (n <= 0) {
        printf("El valor de n debe ser mayor que 0.\n");
        return 1;  // Termina el programa si n no es válido
    }

    // Ciclo do-while para calcular el producto de la serie
    do {
        printf("1/%d ", i);  // Imprime el término actual en formato de fracción
        if (i < n) {
            printf("* ");  // Imprime un signo de multiplicación si no es el último término
        }
        producto *= 1.0 / i;  // Multiplica el término actual al producto acumulado
        i++;  // Incrementa el contador
    } while (i <= n);  // Condición del bucle: se ejecuta mientras i sea menor o igual que n

    printf("\nProducto de los primeros %d términos: %f\n", n, producto);  // Imprime el producto total de la serie

    return 0;
}
