#include <stdio.h>

int main() {
    int n, suma = 0, i = 2; // Se declaran tres variables enteras: n para almacenar el número ingresado por el usuario, suma para almacenar la suma de los números pares, e i como un contador inicializado en 2.

    // Leer el valor de n
    printf("Ingresa un numero: "); // Imprime un mensaje solicitando al usuario que ingrese un número.
    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en la variable n.

    // Presentar la serie de números pares y sumarlos usando un bucle while
    printf("La serie de numeros pares hasta %d es: ", n);
    while (i <= n) { // Inicia un bucle while. Se ejecutará mientras i sea menor o igual que n.
        printf("%d", i); // Imprime el número par actual.
        suma += i; // Añade el valor de i a la variable suma. Esto acumula la suma de los números pares.
        i += 2; // Incrementa i en 2 en cada iteración para pasar al siguiente número par.
        if (i <= n) { // Verifica si i es menor o igual que n para evitar imprimir una coma y un espacio adicional después del último número par.
            printf(", "); // Imprime una coma y un espacio como separador si hay más números en la serie.
        }
    }

    // Imprimir el resultado de la suma
    printf("\nLa suma de los numeros pares hasta %d es: %d\n", n, suma); // Imprime el resultado de la suma de los números pares hasta n.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
