#include <stdio.h>
#include <stdlib.h>

// multiplicação de matriz por escalar

int main()
{
  
  int i, j, anuml, anumc, linha, coluna, somaprod;
  
  printf("\n Informe o numero de linhas e colunas da matriz A: ");
  scanf("%d%d",&anuml,&anumc);
   printf("\n Informe o numero Escalar: ");
   scanf("%d",&somaprod);

 	int A[anuml][anumc]={{0},{0}};
     for(i=0;i<anuml;i++){
            for(j=0;j<anumc;j++){
            printf("\tDigite o Valor A Linha [%d] Coluna [%d]:\t",i+1,j+1);
            scanf("%d",&A[i][j]);
            }
     }

   //processamento da Escalar
   printf(" \tA multiplicacao do Vetor A com escalar Gerou o Vetor C\n ");
   		  int C[anuml][anumc];
		   for(i=0;i<anuml;i++){
            for(j=0;j<anumc;j++){
       			 C[i][j]=A[i][j]*somaprod;
        
        printf("%d ",C[i][j]);
         }
            printf("\n");
     }
	 printf("\n");
		
}
