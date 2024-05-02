#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

/*
[]Declarar variables int
[]Usuario ingresa numero
[]Verificar con if si es primo
[]Mostrar resultado
*/
//18181
int main(){

int numero;
int var=0;

printf("Tirame un numero ");
scanf("%i", &numero);

if (numero==2 || numero==7 || numero==5 || numero==3) {cout<<"Es un numero primo"; var=1;}
if (var!=1){
    if(numero%2!=0 && numero%3!=0 && numero%4!=0 && numero%5!=0 && numero%6!=0 && numero%7!=0 && numero%8!=0 && numero%9!=0)
    {cout<<"Es un numero primo"; var=2;
    }
}
//else if(var==0 && (numero%2==0 || numero%3==0 || numero%4==0 || numero%5==0 || numero%6==0 || numero%7==0 || numero%8==0 || numero%9==0)) cout<<"No es un numero primo";
if(var==0) cout<<"No es un numero primo";

    return 0;
}
