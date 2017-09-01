#include <stdio.h>
#include <stdlib.h>
#define TAM 10




int main(){

	printf("\n\t Original \n");
	int vetor[TAM];
	random(vetor, TAM);	
	imprime(vetor);
	
	//Selection Sort
	printf("\n\t SelectionSort\n");
	int j,i;
	
	for(i=0; i < TAM; i++){
		
		int menor = i;
		for(j= i+1; j<TAM ;j++){
			if(vetor[j] < vetor[menor]){
				menor=j;
			}
		}
		
		//swap
		
		if( i!=menor){
			vetor[i] ^= vetor[menor	];
			vetor[menor] ^= vetor[i];
			vetor[i] ^= vetor[menor];
		}
	
	}	
	imprime(vetor);
return 0;
}


void imprime(int vetor[]){
	int a =0;
	for( a=0; a < TAM;a++){
		printf("%i ",vetor[a]);	
	}	
}


void random(int vetor[], int tamanho){
	int j;
	for (j = 0; j < tamanho; j++){
	      vetor[j] = rand() % 100;
      } 
}

	




