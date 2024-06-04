#include <stdio.h>

int main() {
    int numero, exponente, resultado = 1, i = 0; // Declaración de variables: base es la base de la potencia, exponente es el exponente, resultado almacenará el resultado de la potencia, i es un contador.

    // Leer la base y el exponente
    printf("Ingresa la base: "); // Imprimir mensaje solicitando al usuario ingresar la base.
    scanf("%d", &numero); // Leer el numero ingresado por el usuario y almacenarla en la variable base.
    printf("Ingresa el exponente: "); // Imprimir mensaje solicitando al usuario ingresar el exponente.
    scanf("%d", &exponente); // Leer el exponente ingresado por el usuario y almacenarlo en la variable exponente.

    // Calcular la potencia usando sumas sucesivas con un bucle do while
    do { // Inicio del bucle do-while que se ejecutará al menos una vez.
        int temp = 0, j = 0; // Declaración de variables locales: temp almacenará temporalmente el resultado de la suma, j es un contador interno.
        do { // Bucle interno que se ejecuta mientras j sea menor que resultado.
            temp += numero; // Sumar la base a temp.
            j++; // Incrementar el contador j.
        } while (j < resultado); // Repetir el bucle interno mientras j sea menor que resultado.
        resultado = temp; // Almacenar el valor de temp en resultado.
        i++; // Incrementar el contador i.
    } while (i < exponente); // Repetir el bucle exterior mientras i sea menor que exponente.

    // Imprimir el resultado
    printf("El resultado de %d^%d es: %d\n", numero, exponente, resultado); // Imprimir el resultado de la potencia.

    return 0; // Indicar que el programa ha finalizado con éxito.
}
