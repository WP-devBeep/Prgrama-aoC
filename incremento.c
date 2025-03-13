#include <stdio.h>
 int main(){

    int numero1 = 1, resultado;
    printf("antes incremento: %d\n", numero1);
    // pos-incremento
    //resultado = numero1;
    // numero1++;
    resultado = numero1++;
    //printf("depois incremento: %d\n", numero1);
    printf("depois pós-incremento - numero1: %d - resultado: %d\n", numero1, resultado);
    
    resultado = ++numero1;
    printf("depois pre-incremento - numero1: %d - resultado: %d\n", numero1, resultado);

    //numero1--;
    //printf("depois decremento: %d\n", numero1);

    resultado = numero1--;
    printf("depois pós-decremento - numero1: %d - resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("depois pre-decremento - numero1: %d - resultado: %d\n", numero1, resultado);



 }