#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

/*
[]Declarar variables
[]Pedir numero al usuario
[]Verificar numero
[]Hacer un for que sume los numeros
[]Mostrar resutados
*/

int main(){

int numero, numerocrescendo, numeroTotal;
numeroTotal=0;

numero:
printf("Tirame un numero che ");
scanf("%i", &numero);

if(numero<0 || numero==0){cout<<"Un numero mayor a cero\n"; goto numero;
}

for(numerocrescendo=0; numerocrescendo<=numero; numerocrescendo++)
{numeroTotal=numerocrescendo+numeroTotal;
}
cout<<"La suma de el numero con sus anteriores es de " <<numeroTotal;
    return 0;
}
