#include <stdio.h> // Biblioteca estándar de entrada y salida

int main() {
    int n, contador = 0, i = 2; // Declaración de variables

    // Mensaje para solicitar un número al usuario
    printf("Ingresa un numero: ");
    scanf("%d", &n); // Leer el número ingresado por el usuario

    // Contar los números primos usando un bucle do-while
    if (n > 1) { // Si el número ingresado es mayor que 1
        do {
            int es_primo = 1; // Variable para indicar si i es primo, inicialmente asumimos que sí
            if (i <= 1) es_primo = 0; // Si i es 0 o 1, no es primo
            else {
                for (int j = 2; j <= i / 2 && es_primo; j++) {
                    if (i % j == 0) { // Si es divisible por algún número entre 2 y la mitad de i, no es primo
                        es_primo = 0;
                    }
                }
            }
            if (es_primo) contador++; // Incrementar el contador si i es primo
            i++; // Incrementar i para verificar el siguiente número
        } while (i <= n); // Repetir hasta alcanzar el número ingresado por el usuario
    }

    // Imprimir el resultado
    printf("Hay %d numeros primos hasta %d\n", contador, n);

    return 0; // Indicar que el programa finalizó exitosamente
}
