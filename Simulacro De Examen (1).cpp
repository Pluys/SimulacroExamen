#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

/*
[X]Declarar variable celsius, farenheit (int)
[X]Preguntar valor celsius al usuario
[X]Ingresar celsius
[X]Transformar C a F
[X]Mostrar al usuario
*/

int main(){

int Celsius, Farhenheit;

printf("Tirame un valor Celsius para saber su igual en Farhenheit ");
scanf("%i", &Celsius);

Farhenheit=Celsius*(9/5)+32;
printf("El valor en Farhenheit es de %i\n", Farhenheit);

    return 0;
}
