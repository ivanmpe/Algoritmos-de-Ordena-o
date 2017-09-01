#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 10



int main(){


int contador = 0;


	printf("\n\t Original \n");
	int i;
	int vetor[TAM];	
	random(vetor, TAM);
	imprime(vetor);


return 0;
}

void random(int vetor[], int tamanho){
	int j;
	for (j = 0; j < tamanho; j++){
	      vetor[j] = rand() % 100;
      } 
}

void imprime(int vetor[]){
	int i;
	for(i=0; i < TAM;i++){
		printf("%i ",vetor[i]);	
	}	
}
