#include <stdio.h>
#include <stdlib.h>
#define tam 4
int main(){
int i,produto=0, v1[tam], v2[tam];
	//captura os elementos Vetor v
	for(i=0;i<tam;i++){
		printf("Digite o elemento do Vetor v de nº [%d]=  ",i+1);
		scanf("%d",&v1[i]);
	}
	printf("\n\n\n");
	//captura os elementos Vetor V2
	for(i=0;i<tam;i++){
		printf("Digite o elemento do vetor A de nº [%d]=  ",i+1);
		scanf("%d",&v2[i]);
	
	}
	
	// Produto escalar
	printf("\n: Vetor Soma:\n\n");
	for(i=0;i<tam;i++){
		produto+=(v1[i]*v2[i]);
		}
	printf("\n Produto escalar: %d\n ",produto);	
		
	return 0;
}

