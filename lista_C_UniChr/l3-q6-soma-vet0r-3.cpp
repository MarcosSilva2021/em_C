#include <stdio.h>
#include <stdlib.h>
#define tam 4
int main(){
int i,teste=0, v[tam], A[tam],C[tam];
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
	
	//vetor c
	printf("\n: Vetor Soma:\n\n");
	for(i=0;i<tam;i++){
		C[i]=(v[i]+A[i]);
		printf("%d\t +\t %d\t= %d\n ",v[i],A[i],C[i]);
		}
		

		
	return 0;
}

