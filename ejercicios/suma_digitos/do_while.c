//libreria para el manejo de entrada y salida de datos
#include <stdio.h>

//Funcion principal
int main(){
    
    //Presentar la suma de los digitos de un numero
    printf("===== Suma de Digitos ======="); 

    //Definicion de variables
    int num = 0; // Variable para almacenar el número ingresado por el usuario.
    int sum = 0; // Variable para almacenar la suma de los dígitos.
    int digit; // Variable para almacenar cada dígito extraído del número.

    //peticion e ingreso de valor de la variable num (Numero que se va a sumar)
    printf("Ingrese un número: \n"); // Solicita al usuario que ingrese un número.
    scanf("%d", &num); // Lee el número ingresado por el usuario y lo almacena en la variable num.

    // Si el número ingresado es cero, la suma también será cero. De lo contrario, se realiza el cálculo.
    if (num == 0) {
        sum = 0;
    } else {
        do { // Inicia un bucle do-while para extraer y sumar cada dígito del número.
            digit = num % 10; // Extrae el último dígito del número.
            sum += digit; // Agrega el dígito extraído a la suma total.
            num /= 10; // Elimina el último dígito del número.
        } while (num > 0); // Continúa el bucle mientras el número tenga dígitos.
    }

    // Imprimir el resultado
    printf("La suma de los dígitos es: %d\n", sum); // Imprime la suma de los dígitos.

    return 0 ; // Indica que la función main ha terminado y que el programa se ejecutó correctamente.
}
