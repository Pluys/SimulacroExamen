#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

/*
[]Declarar variable contadora int
[]Pedir numero maximo al usuario
[]Ingresar numero
[]Mostrar contador invertido for
*/

int main(){

int numeroMax;

printf("Tirame un numero che ");

pregunta:
scanf("%i", &numeroMax);


if(numeroMax==0){
cout<<"\nDistinto de sero mijo ";
goto pregunta;
} //if


if(numeroMax<0){
for(numeroMax=numeroMax; numeroMax<=0; numeroMax++)
{cout<<numeroMax; cout<<endl;
} // for

} // if


if(numeroMax>0){
for(numeroMax=numeroMax; numeroMax>=0; numeroMax--)
{cout<<numeroMax; cout<<endl;
} // for

} //if



    return 0;
}
