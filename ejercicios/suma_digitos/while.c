#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida para usar las funciones printf y scanf.

int main() {
    int num; // Variable para almacenar el número ingresado por el usuario.
    int suma = 0; // Variable para almacenar la suma de los dígitos.
    int cont; // Variable temporal para almacenar cada dígito extraído del número.

    //Peticion e ingreso de del valor de la variable num (numero que se a sumar)
    printf("Ingrese un numero:\n "); // Solicita al usuario que ingrese un número.
    scanf("%d", &num); // Lee el número ingresado por el usuario y lo almacena en la variable num.

    // Bucle while para extraer y sumar cada dígito del número.
    while (num > 0) { // Inicia un bucle while. Continuará mientras num sea mayor que 0.
        cont = num % 10; // Extrae el último dígito del número y lo almacena en la variable cont.
        suma += cont; // Agrega el dígito extraído a la suma total.
        num /= 10; // Divide el número entre 10 para eliminar el último dígito.
    }
    
    printf("La suma de los digitos del numero ingresado es: %d\n", suma); // Imprime la suma de los dígitos.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
