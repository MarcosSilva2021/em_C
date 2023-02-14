#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
 int M[5][5];
 int SL[5];
 int SC[5];
 int i,j,x;

 //Laço para zerar todos os campos dos vetores usados
 for(i=0;i<5;i++){
  SL[i]= 0;
  SC[i]= 0;
 }

 //Montando uma Matriz M insirindo valores, coloquei a opção de números randômicos até 20 para teste:
 for(i=0;i<5;i++){
  for(j=0;j<5;j++){
   //M[i][j]= rand()%20;
   printf("Insira M[%d][%d]:",i,j);  
   scanf("%d",&M[i][j]); 
  
   SL[i]= SL[i]+M[i][j];

   SC[j]= SC[j]+M[i][j];
 }}

 //Mostrando a matriz:
 for(i=0;i<5;i++){
  for(j=0;j<5;j++){
   printf("M[%d][%d]= %d \n",i,j,M[i][j]);
 }}

 //Mostrando so Vetores:
 for(i=0;i<5;i++){
  printf(" Somatorio da Linha %d= %d \n",i,SL[i]);
  printf(" Somatorio da Coluna %d= %d \n",i,SC[i]);
 }

return(0);
}
