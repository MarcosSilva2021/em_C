#include <stdio.h>
#include <stdlib.h>
#define tam 5
int main(){
int i,teste=0, v[tam], A[tam];
	//captura os elementos Vetor v
	for(i=0;i<tam;i++){
		printf("Digite o elemento do Vetor v de nº [%d]=  ",i+1);
		scanf("%d",&v[i]);
	}
	printf("\n\n\n");
	//captura os elementos Vetor A
	for(i=0;i<tam;i++){
		printf("Digite o elemento do vetor A de nº [%d]=  ",i+1);
		scanf("%d",&A[i]);
	
	}
	
	//comparando os vetores
	printf("\n: Valores originais :::\n");
	for(i=0;i<tam;i++){
	//	for(i=0;i<tam;i++){
		if(v[i]!=A[i]){
			teste++;
			printf(" %d\t %d\n",v[i],A[i]);
		}
		
//	}
	}
		printf("valores diferentes : %d\n",teste);
	if(teste==0)	
		printf("vetores iguais");
	else
		printf("vetores diferentes");
	return 0;
}

