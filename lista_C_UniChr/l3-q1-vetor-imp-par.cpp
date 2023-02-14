#include <stdio.h>
#include <stdlib.h>
int main()
{
int vetor[tam];
int i;
float soma = 0;
for (i = 0; i < tam; i++){
	
	printf("Digite o valor da posicao %d do vetor: ", i+1);
	scanf("%d", &vetor[i]);
	soma = soma + vetor[i];
}
printf("\nO valor da soma dos elementos do vetor eh: %.2f\n", soma);
return 0;}

