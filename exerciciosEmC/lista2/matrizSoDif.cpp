#include<stdio.h>
 
int main(){
int matA[3][3], matB[3][3],matS[3][3], matD[3][3];
int x,y,validar;

// Lendo matriz A
printf("\n\nEntre com os valores da matriz A :\n");
for(x=0;x<3;x++)
{
	for(y=0;y<3;y++)
	{
		printf("matA[%d][%d]=",x+1,y+1);
		scanf("%d",&validar);
			if ((validar <= 30) && (validar >= 1)) 
				matA[x][y] = validar;  
			else{
				printf("numero fora do intervalo 1:30 ! \n");
				y--;
				continue;}
	}
	
}
// Lendo matriz B
printf("\n\nEntre com os valores da matriz B :\n");
for(x=0;x<3;x++)
{
	for(y=0;y<3;y++)
	{
		printf("matB[%d][%d]=",x+1,y+1);
		scanf("%d",&validar);
			if ((validar <= 30) && (validar >= 1)) 
				matB[x][y] = validar;  
			else{
				printf("numero fora do intervalo 1:30 ! \n");
				y--;
				continue;}
	}
}

//Processando
for(x=0;x<3;x++){
	for(y=0;y<3;y++){
		matS[x][y]=matA[x][y]+matB[x][y];
		matD[x][y]=matA[x][y]-matB[x][y];
	}
}

//saida
printf("A matriz soma e:\n");
for(x=0;x<3;x++){
	for(y=0;y<3;y++){
		printf("%d \t", matS[x][y]);
	}
		printf("\n");
}

printf("A matriz Diferença e:\n");
for(x=0;x<3;x++){
	for(y=0;y<3;y++){
		printf("%d \t", matD[x][y]);
	}
		printf("\n");
}
  return 0;
}
