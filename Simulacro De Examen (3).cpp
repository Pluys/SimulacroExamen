#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;

/*
[]Declarar variables char
[]Pedir usuario y contraseña
[]Verifiacar con if
[]Usar gotos;
*/

int main(){

string Usuario="Dekina";
string Contrasenia="Plus";

string verificacionUsuario;
string verificacionContrasenia;

int verificacion=0;


printf("Usuario:");
cin>>verificacionUsuario;

printf("Contrasenia:");
cin>>verificacionContrasenia;

//printf("%s,%s", verificacionContrasenia, verificacionUsuario);
cout<<verificacionUsuario <<verificacionContrasenia;

//No verifica correctamente.
if(verificacionUsuario!="Dekina" && verificacionContrasenia!="Plus"){
verificacion=3;
}

if(verificacionContrasenia!="Dekina" && (verificacion!=3)) {
verificacion=1;
}

if(verificacionContrasenia!="Plus" && (verificacion!=1 && verificacion!=3)) {
verificacion=2;
}


if(verificacion==1) {printf("Usuario incorrecto");}
if(verificacion==2) {printf("Contraseña incorrecta");}
if(verificacion==3) {printf("Usuario y contraseña incorrectos");}


    return 0;
}
