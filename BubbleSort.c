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

//BubbleSort

	printf("\n\t BubbleSort \n");
	int ordenado =0;

	while(!ordenado){
		ordenado = 1;
		int i;
		for( i=0;i <TAM ; i++){
			if(vetor[i] < vetor[i-1]){
				vetor[i] ^= vetor[i-1];
				vetor[i-1] ^= vetor[i];
				vetor[i] ^= vetor[i-1];
				ordenado=0;
				contador++;
			}
		}
	}	
	
	printf("Quantidade de mudancas: %i \n",contador);
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







