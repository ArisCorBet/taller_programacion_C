#include <stdio.h>

int main() {
    int n, suma = 0; // Declaración de variables: n para almacenar el número ingresado por el usuario, y suma para almacenar la suma de los números pares.

    // Leer el valor de n
    printf("Ingresa un numero: "); // Imprime un mensaje solicitando al usuario que ingrese un número.
    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en la variable n.

    // Presentar la serie de números pares y sumarlos usando un bucle for
    printf("La serie de numeros pares hasta %d es: ", n);
    for (int i = 2; i <= n; i += 2) { // Inicia un bucle for. El contador i se inicializa en 2, y el bucle se ejecutará mientras i sea menor o igual que n. En cada iteración, i se incrementa en 2 para pasar al siguiente número par.
        printf("%d", i); // Imprime el número par actual.
        suma += i; // Añade el valor de i a la variable suma. Esto acumula la suma de los números pares.
        if (i != n) { // Verifica si i es diferente de n para evitar imprimir una coma y un espacio adicional después del último número par.
            printf(", "); // Imprime una coma y un espacio como separador si hay más números en la serie.
        }
    }

    // Imprimir el resultado de la suma
    printf("\nLa suma de los numeros pares hasta %d es: %d\n", n, suma); // Imprime el resultado de la suma de los números pares hasta n.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
