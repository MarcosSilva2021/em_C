#include <stdio.h>
#include <stdlib.h>
#define DIML 4
#define DIMC 2
// soma de matriz A+B=C

main()
{
  int A[DIML][DIMC]={{0},{0}};
  int i,j;
 // fflush(stdin);
     for(i=0;i<DIML;i++){
            for(j=0;j<DIMC;j++){
            printf("\tDigite o Valor A Linha [%d] Coluna [%d]:\t",i+1,j+1);
            scanf("%d",&A[i][j]);
            }
     }
  int B[DIML][DIMC]={{0},{0}};
     printf("\n");
     for(i=0;i<DIML;i++){
            for(j=0;j<DIMC;j++){
            printf("\tDigite o Valor B Linha [%d] Coluna [%d]:\t",i+1,j+1);
            scanf("%d",&B[i][j]);
            }
     }
  int C[DIML][DIMC]={{0},{0}};
     printf("\n");
     for(i=0;i<DIML;i++){
            for(j=0;j<DIMC;j++){
        C[i][j]=A[i][j]+ B[i][j];
        printf(" \tA Soma do Vetor A + B Gerou o Vetor C [%d]\n",C[i][j]);
            }
     }
}
