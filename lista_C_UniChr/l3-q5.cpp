#include <stdio.h>
#include <stdlib.h>
#define tam 7

int main(){
int i,cont=0, v1[tam];
	//captura os elementos Vetor v
	for(i=0;i<tam;i++){
		printf("Digite o elemento do Vetor v de nº [%d]=  ",i+1);
		scanf("%d",&v1[i]);
	}
	
	// Avaliando os divisores
		for(i=0;i<tam;i++){
		if(v1[i]%2==0){		
			printf("\n multiplo de 2: %d", v1[i]);
			cont++;
		}	
		if(v1[i]%3==0){		
			printf("\n multiplo de 3: %d", v1[i]);
			cont++;
		}
		if(v1[i]%2==0 and v1[i]%3==0){
			printf("\n multiplo de 2 e 3: %d", v1[i]);
			cont++;
		}
					
	}
	if(cont==0)
			printf("\nNao existe dividores de 2, 3 ");
		
	return 0;
}

