/*
 * function.c
 *
 *  Created on: 26 ene. 2022
 *      Author: daniel
 */

int value(){
	int num;
	printf("Introdueix un nombre enter: ");
	scanf("%d", &num);
	return num;
}

int value2(){
	int num;
	printf("Introdueix el nombre enter al que el vols elevar: ");
	scanf("%d", &num);
	return num;
}

void elevate(num1, num2){
	int aux=1, i;
	for (i=0;i<num2;i++){
	aux=num1*aux;
	}
	printf("El valor és %d.",aux);
}
