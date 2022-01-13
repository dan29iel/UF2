/*
 * function.c
 *
 *  Created on: 12 ene. 2022
 *      Author: daniel
 */

int validate(){
	int num, i=0;
		do{
			printf("Introdueix un nombre: ");
			scanf("%d", &num);
			i++;
		}while (num>5000 && i<3|| num<10 && i<3);
		if (num<10 || num>5000){
			printf("No has introduit 3 nombres valid ");
		}
		else{
		printf(num);
		}
}
