//libreria para el manejo de entrada y salida de datos
#include <stdio.h>

//Funcion principal
int main(){

    //Presentar la suma de los digitos de un numero
    printf("==== Suma de Digitos ======="); 

    //Definicion de variables
    int num; // Variable para almacenar el número ingresado por el usuario.
    int sum = 0; // Variable para almacenar la suma de los dígitos.
    int digit; // Variable para almacenar cada dígito extraído del número.

    //Peticion e ingreso de del valor de la variable num (numero que se a sumar)
    printf("Ingrese un numero: "); // Solicita al usuario que ingrese un número.
    scanf("%d", &num); // Lee el número ingresado por el usuario y lo almacena en la variable num.

    // Bucle for para extraer y sumar cada dígito del número.
    for (; num > 0; num /= 10) { // Inicia un bucle for. Continuará mientras num sea mayor que 0, y en cada iteración se dividirá num por 10.
        digit = num % 10; // Extrae el último dígito del número y lo almacena en la variable digit.
        sum += digit; // Agrega el dígito extraído a la suma total.
    }

    printf("La suma de los digitos es: %d\n", sum); // Imprime la suma de los dígitos.

    return 0; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
