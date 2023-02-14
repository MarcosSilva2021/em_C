#include<stdio.h>

// Calculo de determinante de Matriz 2x2 || 3x3

int main()
{
  
  int i, j, anuml, anumc, linha, coluna, somaprod=0;
    
  printf("\n Informe o numero de linhas e colunas da matriz A: ");
  scanf("%d%d",&anuml,&anumc);
  

 	int A[anuml][anumc]={{0},{0}};
     for(i=0;i<anuml;i++){
            for(j=0;j<anumc;j++){
            printf("\tDigite o Valor A Linha [%d] Coluna [%d]:\t",i+1,j+1);
            scanf("%d",&A[i][j]);
            }
     }
	//determinante de- matriz quadrada
	if(anuml==anumc){
		if(anuml==2){
			somaprod= (A[0][0]*A[1][1]) - (A[0][1]*A[1][0]);
			printf("\n\t o Determinate eh : %d ", (int)somaprod);
			printf("a1 %d",A[0][0]);
			
		}if(anuml==3){
			somaprod= ( A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1] )) - ( A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0] ) ) + ( A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0] ));
			printf("\n\t o Determinate eh : %d ", somaprod);
		}
		
	}else{
		printf("\n\tsomente matriz 2x2 e 3x3");
		
	}
}
