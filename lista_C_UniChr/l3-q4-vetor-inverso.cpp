#include <stdio.h>
#include <stdlib.h>
#define tam tam
int main(){
	int i, v[tam];
	//captura os elementos
	for(i=0;i<tam;i++){
		printf("Digite o elemento de nº [%d]=  ",i+1);
		scanf("%d",&v[i]);
	}
	//vetor em ordem
	printf("\n::: Valores originais :::\n");
	for(i=0;i<tam;i++)
		printf("%d\n",v[i]);
	//vetor reverso
	printf("\n::: Valores na ordem inversa :::\n");
	for(i=(tam-1);i>=0;i--)
		printf("%d\n",v[i]);
	return 0;
}

