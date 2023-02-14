#include<stdio.h>
 
int main(){
int mat[3][3];
int x,y,validar,soma1=0, soma2=0, soma3=0;

printf("\n\nEntre com os valores a da matriz:\n");
for(x=0;x<3;x++)
{
	for(y=0;y<3;y++)
	{
		printf("mat[%d][%d]=",x+1,y+1);
		scanf("%d",&validar);
			if ((validar <= 10) && (validar >= 1)) 
				mat[x][y] = validar;  
			else{
				printf("numero fora do intervalo 1:30 ! \n");
				y--;
				continue;}
	}
	
}
//procesando
for(x=0;x<3;x++)
{
	for(y=0;y<=3;y++)
	{
		if(y==0){
		soma1=soma1 + mat[x][y];
	}
	if(y==1){
		soma2=soma2 + mat[x][y];
	}
	if(y==2){
		soma3=soma3 + mat[x][y];
	}
		
	}
	
}  

printf("a soma das linhas e \n linha1: %d \n linha2: %d \n linha3: %d",soma1, soma2, soma3);
  return 0;
} /*fim do programa*/
