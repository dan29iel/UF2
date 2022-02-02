/*
 * main.c
 *
 *  Created on: 2 feb. 2022
 *      Author: daniel
 */

#include <stdio.h>
#define SIZE 200
#define SIZE2 100

void main(){
           int llista_numeros[SIZE], llista_numeros_par[SIZE2];
           int j=1;
           for (int i = 1; i < SIZE+1; i++) {
           llista_numeros[i]=i;
           if (llista_numeros[i]%2 == 0) {
                llista_numeros_par[j] = llista_numeros[i];
                 j++;
           }
   }
           printf("El array ordenado de numeros pares (1-200) és: [");
           for (int j = 1; j < SIZE2 +1;j++) {
                   if(j!=SIZE2){
                            printf("%d, ", llista_numeros_par[j]);
                  }
                  else{
                          printf("%d", llista_numeros_par[j]);
            }
   }
    printf("]");
}

