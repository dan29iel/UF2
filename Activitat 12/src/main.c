/*
 * main.c
 *
 *  Created on: 3 feb. 2022
 *      Author: daniel
 */


#include <stdio.h>

int validar(){
	int numero;
	do{
		printf("Escribe el tamaño del array: ");
		scanf("%d", &numero);
	}while (numero<1 || numero>50);
	return numero;

int introduccion(){
	int numero;
	do{
		printf("Introduce un numero: ");
		scanf("%d", &numero);
	}while (numero<1);
	return numero;
}

void main(){
	int size;
	size=validar();
	int llista_numero[size];
	int numero;
	for (int i = 0; i < size; i++){
		numero = introduccion();
		llista_numero[i]=numero;
	}

}


}

