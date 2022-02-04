/*
 * function.c
 *
 *  Created on: 3 feb. 2022
 *      Author: daniel
 */

#include <stdio.h>
#include "function.h"

int introduccion(char *msg){
	int numero;
	do{
		printf(msg);
		scanf("%d", &numero);
	}while (numero<1);
	return numero;
}

int validar(char *msg2){
	int numero;
	do{
		printf(msg2);
		scanf("%d", &numero);
	}while (numero<1 ||  numero>50);
	return numero;
}

void cambio(int *llista_numero, int Size){
	for (int i=0;i<Size-1;i++){
		for (int j=i+1;j<Size;j++){
			if (llista_numero[i]<llista_numero[j]){
				int canvi=llista_numero[i];
				llista_numero[i]=llista_numero[j];
				llista_numero[j]=canvi;
			}
		}
	}
}

void mostrar(int *llista_numero, int Size){
	printf("El array ordenado es: [");
	for (int i=0;i<Size;i++){
		if(i!=Size-1){
			printf("%d", llista_numero[i]);
		}else{
		printf("%d", llista_numero[i]);
		}
	}
	printf("]");
}
