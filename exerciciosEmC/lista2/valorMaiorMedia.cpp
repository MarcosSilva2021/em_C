#include <stdio.h>
int main() {
	int vetor[100],vet[100], valor, i,j,numero,cont=0;
	float media;
	
	for (i=0;i<10;i++){
		printf("Insira %d numero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	numero=vetor[0];
	for (i=0;i<100;i++){
		if (numero>=vetor[i]){
			numero=vetor[i];
		}
	}
	 for (i=0;i<100;i++){
		if (numero==vetor[i]){
			vet[cont]=i;
			cont++;
	    }
	}
	printf("O menor numero e %d e se repete %d \n", numero, cont);
	printf("as ordens sao:\n");
	for(j=0;j<cont;j++){
		printf(" %d ,", vet[j]);
    }
	return 0;
}
