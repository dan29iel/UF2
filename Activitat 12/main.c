/*
 * main.c
 *
 *  Created on: 3 feb. 2022
 *      Author: daniel
 */


#include <stdio.h>
#include "function.h"

void main() {
	int Size;
	Size=validar(MSG);
	int llista_numero[Size];
	for (int i=0;i<Size;i++){
		llista_numero[i]=introduccion(MSG2);
	}
	cambio(llista_numero, Size);
	mostrar(llista_numero, Size);
}
