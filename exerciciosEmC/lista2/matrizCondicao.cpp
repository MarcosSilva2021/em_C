#include<stdio.h>
 
int main(){
int mat[3][3];
float det;
int x,y,cont,cont2,validar,soma;
 
printf("Este programa calcula a determinante de uma matriz quadrada de ordem 3");
printf("\n\nEntre com os valores a da matriz:\n");
for(x=0;x<3;x++)
{
	for(y=0;y<3;y++)
	{
		printf("mat[%d][%d]=",x+1,y+1);
		scanf("%d",&validar);
			if ((validar <= 30) && (validar >= 0)) 
				mat[x][y] = validar;  
			else{
				printf("numero fora do intervalo 1:30 ! \n");
				y--;
				continue;}
	} /*fim do for*/
} /*fim do for*/
//processamento
for(x=0;x<3;x++)
{
	for(y=0;y<3;y++)
	{
		if ((x==y) and (mat[x][y] == 1)) 
			cont++;
			
	
		if ((x!=y) and (mat[x][y] > 0)) 
			cont2++;
		
		soma=mat[x][y];	
		}
		
		
	} /*fim do for*/
 
	if(soma==0){
		printf("matriz nula");
	}else{
	
		if((cont==3) and (cont2==0))
			printf("Matriz  Identidade");
			else
			printf("Matriz não  Identidade");
	}
 
  return 0;
} /*fim do programa*/
