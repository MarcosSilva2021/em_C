#include <stdio.h>

int main() {
	float soma=0;
	int valor=1,i=0;
	while (valor!= 0){
		printf("dgite um valor de ordem %d:\n",i+1);
		scanf("%f", &valor);
		if (valor % 2 == 0 and valor > 1) {			
			soma+= valor;
			i++;
		}else{
	
			printf("\nValor não eh par !!\n Digite 0 para /sair\n\n");
		}	
		
	
	}
	printf("\n\n\n O valor do media eh: %f2",soma/i);
	printf("\n foram %d numeros somados",i);

	return 0;
}


