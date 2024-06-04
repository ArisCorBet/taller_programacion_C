#include <stdio.h>

int main() {
    int n, suma = 0, i = 2; // Declaración de variables: n para almacenar el número ingresado por el usuario, suma para almacenar la suma de los números pares, e i como un contador inicializado en 2.

    // Leer el valor de n
    printf("Ingresa un numero: "); // Solicita al usuario que ingrese un número.
    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en la variable n.

    // Presentar la serie de números pares y sumarlos usando un bucle do while
    printf("La serie de numeros pares hasta %d es: ", n);
    do { // Inicia un bucle do-while.
        printf("%d", i); // Imprime el número par actual.
        suma += i; // Suma el valor actual de i a la variable suma.
        i += 2; // Incrementa i en 2 para pasar al siguiente número par.
        if (i <= n) { // Verifica si i es menor o igual que n para evitar imprimir un número par adicional si es mayor que n.
            printf(", "); // Imprime una coma y un espacio como separador si hay más números en la serie.
        }
    } while (i <= n); // Continúa el bucle mientras i sea menor o igual que n.

    // Imprimir el resultado de la suma
    printf("\nLa suma de los numeros pares hasta %d es: %d\n", n, suma); // Imprime la suma de los números pares hasta n.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
