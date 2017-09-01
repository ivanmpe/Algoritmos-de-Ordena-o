#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#define N 100




int main(){

	
	printf("\n\t Original \n");
	int vetor[TAM];
	random(vetor,TAM);	 
	imprime(vetor);

	//CountingSort 
	int quantidade[N];
	memset(quantidade,0,sizeof quantidade);
	int i;
	for(i=0;i<TAM; i++){
		quantidade[vetor[i]]++;
	}
		
	i=0;
	int j;
	for( j=0;j<N; j++){
		while(quantidade[j]){
			vetor[i++] = j;
			quantidade[j]--;
		}	
	}
	
	printf("\n\tCountingSort\n");
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







