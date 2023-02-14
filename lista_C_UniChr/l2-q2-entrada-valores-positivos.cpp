#include <stdio.h>

int main() {
	int i=0,numero,soma=0;
	
	while(numero != -1){
		printf("*** digite o [%d] numero\n", i+1);
		scanf("%d", &numero);
		if (numero > 0) { 
			
			soma += numero;
			i++;
		}else
			printf("\n Valor Não aceito, Digite -1 para SAIR !!!\n\n");
		
	}
	printf("\n\n\n O valor do Somatorio eh: %d",soma);
	printf("\n foram %d numeros somados",i);
	return 0;
}

