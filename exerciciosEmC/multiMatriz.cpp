#include <stdio.h>
#include <stdlib.h>

// multiplica��o de matriz A*B=C

int main()
{
  
  int i, j, anuml, anumc, bnuml, bnumc, linha, coluna;
  int somaprod;
  printf("\n Informe o numero de linhas e colunas da matriz A: ");
  scanf("%d%d",&anuml,&anumc);
   printf("\n Informe o numero de linhas e colunas da matriz B: ");
  scanf("%d%d",&bnuml,&bnumc);
 	int A[anuml][anumc]={{0},{0}};
     for(i=0;i<anuml;i++){
            for(j=0;j<anumc;j++){
            printf("\tDigite o Valor A Linha [%d] Coluna [%d]:\t",i+1,j+1);
            scanf("%d",&A[i][j]);
            }
     }
  int B[bnuml][bnumc]={{0},{0}};
     printf("\n");
     for(i=0;i<bnuml;i++){
            for(j=0;j<bnumc;j++){
            printf("\tDigite o Valor B Linha [%d] Coluna [%d]:\t",i+1,j+1);
            scanf("%d",&B[i][j]);
            }
     }
   //processamento da multiplica��o
    if(anumc==bnuml){
	
		  int C[anuml][anumc];
		  for(linha=0; linha<anuml; linha++){
		  
		    for(coluna=0; coluna<anuml; coluna++){
		      	
		      for(i=0; i<anumc; i++){
		      	
			   	 somaprod += A[linha][i] * B[i][coluna];
			   	
			   	}
			   
		       C[linha][coluna]=somaprod;
		       somaprod=0;
		     	
		  } 
		}	 
			printf("\nlinha: %d coluna: %d\n", linha, coluna);
		         //exibindo c
		     printf(" \tA Multiplica��o do Vetor A * B Gerou o Vetor C\n" );
		    for(i=0;i<anuml;i++){
		            for(j=0;j<bnumc;j++){
		            	printf("%d ", C[i][j]);
		            }
		             printf("\n");
		     }
		      printf("\n");
	}else{
		printf("n�o se pode realizar a multiplica��o pois o A coluna = %d e B linha = %d n�o procedem: ", anumc,bnuml);
	}
	
}
