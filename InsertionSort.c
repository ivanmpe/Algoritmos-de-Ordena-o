#include <stdio.h>
#include <stdlib.h>
#define TAM 10


	
int main(){
	
	printf("\n\t Original \n");
	int vetor[TAM];
	random(vetor,TAM);
	imprime(vetor);
	
	//InsertionSort
	int i;
	for( i=0; i < TAM;i++){
		int elemento = vetor[i];
		int j = i;
		while(j>0 && vetor[j-1]>elemento){
			vetor[j] = vetor[j-1];
			j--;
		}
		vetor[j] = elemento;
	}
	printf("\n\tInsertionSort \n");
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
	int a =0;
	for( a=0; a < TAM;a++){
		printf("%i ",vetor[a]);	
	}	
}
