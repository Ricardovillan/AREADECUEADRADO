// areadecuadrado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <cmath>
#include <stdio.h>
#include <iostream>

void main()
{
    float radio, area;
    float π = 3.1416;
    printf("Radio:");
    scanf_s("%f",&radio);
    float radio2 = radio * radio;
    area = (π * radio2);
    printf("El area del rectangulo es:%f", area);
}


