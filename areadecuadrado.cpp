// areadecuadrado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

void main()
{
    int L1, L2, area;
    printf("lado 1:");
    scanf_s("%i",&L1);
    printf("Lado 2:");
    scanf_s("%i", &L2);
    area = L1 * L2;
    printf("El area del cuadrado es:%i", area);
}


