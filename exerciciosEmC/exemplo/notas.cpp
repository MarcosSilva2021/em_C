#include<stdio.h>

int main(void)
{

// entrada de variaveis
 int i;	
 char url[]="notas1.txt";
 float nota;
//criando ponteiro
 FILE *arq;
 
 // testando condição p abrir arquivo
 arq = fopen(url, "a");
 if(arq == NULL)
   printf("Erro, nao foi possivel abrir o arquivo\n");
 else{
 	
 	// Escrevendo no arquivo
	fprintf(arq, "\n\n",nota );
	fprintf(arq, "coordenadas da bolinha\n",nota );
	for(i=0;i<=5;i++)  {
	
		  printf("Nota de %d ",i+1);
		  scanf("%f", &nota);
		  fprintf(arq, "Cordenadas[x][y]:\t %.2f \t %.2f\n", nota, nota+1);
		
	}



	 
	 	
	fprintf(arq, "\n",nota );
	fprintf(arq, "cordenadas do grafico\n",nota );

	for(i=0;i<=5;i++)  {
	
		  printf("Nota de %d ",i+1);
		  scanf("%f", &nota);
		  fprintf(arq, "Cordenadas[x][y]:\t %.2f \t %.2f\n", nota, nota+1);
		
	}
  
 
 }
 //fechando o arquivo
 fclose(arq);
 
 return 0;
}
