/*A través de una función que reciba por referencia un número entero,
calcular el cubo de dicho número y mostrarlo en el bloque principal de
ejecución del programa.*/

#include <stdio.h>
int cubo(int);

int main() {
    int num, resultado;

    printf("Ingresar un número: ");
    scanf("%d", &num);
    resultado= cubo(num);
    printf("%d",resultado);
    return 0;
}

int cubo(int num){

    return (num*num*num);
}
