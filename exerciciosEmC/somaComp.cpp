#include <stdio.h>
#include <stdlib.h>

// soma de matriz A+B=C

int main()
{
  
  int i,j,numl, numc;
  printf("\n Informe o numero de linas e colunas das matrizes: ");
  scanf("%d%d",&numl,&numc);
 	int A[numl][numc]={{0},{0}};
     for(i=0;i<numl;i++){
            for(j=0;j<numc;j++){
            printf("\tDigite o Valor A Linha [%d] Coluna [%d]:\t",i+1,j+1);
            scanf("%d",&A[i][j]);
            }
     }
  int B[numl][numc]={{0},{0}};
     printf("\n");
     for(i=0;i<numl;i++){
            for(j=0;j<numc;j++){
            printf("\tDigite o Valor B Linha [%d] Coluna [%d]:\t",i+1,j+1);
            scanf("%d",&B[i][j]);
            }
     }
     
	 //somando as matrizes 
     
  int C[numl][numc]={{0},{0}};
     printf("\n");
     for(i=0;i<numl;i++){
            for(j=0;j<numc;j++){
        C[i][j]=A[i][j]+ B[i][j];
        printf(" \tA Soma do Vetor A + B Gerou o Vetor C [%d]\n",C[i][j]);
            }
     }
}
