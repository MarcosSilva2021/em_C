// PROGRAMA PARA MULTIPLICAR MATRIZES 3X3 //

#include <stdio.h>

int main()
{
	int matriz_A[3][3];
	int matriz_B[3][3];
	int matriz_C[3][3];
	int i=0, j=0, k=0, sum=0;

	// pega os valores do teclado para montar a matriz A
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Elemento a%i%i da matriz A: ", i+1, j+1);
			scanf("%i", &matriz_A[i][j]);
		}
	}

	// pega os valores do teclado para montar a matriz B
	printf("\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Elemento b%i%i da matriz B: ", i+1, j+1);
			scanf("%i", &matriz_B[i][j]);
		}
	}
	
	//calcula a matriz C=AxB
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0; k<3; k++)
			{
				sum += matriz_A[i][k] * matriz_B[k][j];
			}
			matriz_C[i][j]=sum;
			sum=0;
		}
	}

	// imprime a matriz A
	printf("\nMatriz A\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%i  ", matriz_A[i][j]);
		}
		printf("\n");
	}

	// imprime a matriz B
	printf("\nMatriz B\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%i  ", matriz_B[i][j]);
		}
		printf("\n");
	}

	// imprime a matriz C
	printf("\nMatriz C=AxB\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%i  ", matriz_C[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	return 0;
}
