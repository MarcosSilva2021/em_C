#include <stdio.h>
#include <stdlib.h>

// multiplicação de matriz A*B=C

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
   //processamento da multiplicação
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
		     printf(" \tA Multiplicação do Vetor A * B Gerou o Vetor C\n" );
		    for(i=0;i<anuml;i++){
		            for(j=0;j<bnumc;j++){
		            	printf("%d ", C[i][j]);
		            }
		             printf("\n");
		     }
		      printf("\n");
	}else{
		printf("não se pode realizar a multiplicação pois o A coluna = %d e B linha = %d não procedem: ", anumc,bnuml);
	}
	
}
