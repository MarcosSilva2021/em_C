#include<stdio.h>
int main(){
	
	 int i, j,numl, numc, anuml, anumc, bnuml, bnumc, linha, coluna, somaprod, opcao;
	 int C[40][40];
  
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
	// menu de opções
	printf("escolha uma opcao:\n \n 1 = soma \n 2 = subtrair \n 3 = multiplicar por escalar \n 4 = multiplicar matriz x matriz Escalar \n"); 
	printf(" 5 = multiplicar matriz quadrada \n 6 = determinante \n 0 = sair \n");
	scanf("&d",&opcao);
	
	do{
	
	switch(opcao){
	
	    case 1 :
	    	printf ("Soma\n");
	    		 //somando as matrizes 
	     
		    int C[numl][numc]={{0},{0}};
		     printf("\n");
		     for(i=0;i<numl;i++){
		            for(j=0;j<numc;j++){
		        C[i][j]=A[i][j]+ B[i][j];
		        printf(" \tA Soma do Vetor A + B Gerou o Vetor C [%d]\n",C[i][j]);
		            }
		     }
   	    break;
    
    case 2 :
    printf ("Subtracao\n");
    	printf ("Soma\n");
	    		 //somando as matrizes 
	     
		    int C[numl][numc];
		    
		     printf("\n");
		     for(i=0;i<numl;i++){
		            for(j=0;j<numc;j++){
		        C[i][j]=A[i][j] - B[i][j];
		        printf(" \tA Subtracao do Vetor A e B Gerou o Vetor C [%d]\n",C[i][j]);
		            }
		     }
    break;
    
    case 3 :
    	printf ("multiplicar por escalar\n");
    	printf("\n Informe o numero Escalar: ");
        scanf("%d",&somaprod);
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
    break;
    
    case 4 :
    printf (" multiplicar matriz x matriz Escalar \n");
    
    		 int C[numl][numc]={{0},{0}};
     printf("\n");
     printf(" \tA multiplicacao do Vetor A * B Gerou o Vetor C [%d]\n",C[i][j]);
     for(i=0;i<numl;i++){
            for(j=0;j<numc;j++){
        C[i][j]=A[i][j]* B[i][j];
        printf(" %d ",C[i][j]);
            } printf("\n");
     } printf("\n");
    	
    break;
    
    case 5 :
    printf ("multiplicar matriz quadrada\n");
    
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
    
    break;
    
    case 6 :
    printf ("determinante\n");
    
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
    	
    break;
        
    default :
    printf ("Menu principal !\n");
  }
  }while(opcao=!0)	
}
