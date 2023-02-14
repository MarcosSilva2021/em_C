#include<stdio.h>
 
int main(){
int mat[3][3];
float det, det1;
int x,y;
 
printf("Este programa calcula a determinante de uma matriz quadrada de ordem 3");
printf("\n\nEntre com os valores a da matriz:\n");
for(x=0;x<3;x++)
{
	for(y=0;y<3;y++)
	{
		printf("mat[%d][%d]=",x+1,y+1);
		scanf("%d",&mat[x][y]);
	} /*fim do for*/
} /*fim do for*/

/*formula para calcular a determinante */ 
det=((mat[0][0]*mat[1][1]*mat[2][2])+(mat[0][1]*mat[1][2]*mat[2][0])+(mat[0][2]*mat[1][0]*mat[2][2]))-((mat[2][0]*mat[1][1]*mat[0][2])+(mat[2][1]*mat[1][2]*mat[0][0])+(mat[2][2]*mat[1][0]*mat[0][1])); 
printf("Determinante da matriz = %0.2f\n",det);


 
  return 0;
} /*fim do programa*/
