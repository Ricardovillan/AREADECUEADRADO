// areadecuadrado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

void main()
{
    int Altura, Base, area;
    printf("Base:");
    scanf_s("%i",&Base);
    printf("Altura:");
    scanf_s("%i", &Altura);
    area = Base * Altura;
    printf("El area del cuadrado es:%i", area);
}


