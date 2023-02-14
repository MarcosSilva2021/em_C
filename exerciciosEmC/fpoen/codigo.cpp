#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>

int main(int argc, char *argv[])
{
    
setlocale(LC_ALL, 

"Portuguese");

 FILE *fp;

 float A,B,C, R1, R2, x1, x2, x, inc, Delta;
 

int i; 

 if(argc !=8){
         printf("Voce esqueceu de digitar o nome do arquivo ou algum argumento.\n");
         exit(1);
         }
 
 if

((fp=fopen(argv[1], "w"))==NULL){
         printf("O arquivo nao pode ser aberto.\n");
         exit(1);
         }
 
  A = atof(argv[2]);
  B = atof(argv[3]);
  C = atof(argv[4]);
  x1 = atof(argv[5]);
  x2 = atof

(argv[6]); 
  inc = atof(argv[7]);

          
Delta = sqrt(B*B-4*A*C);

  

R1 = (-B + Delta)/2*A;
  R2 = (-B - Delta)/2*A;

  fprintf(fp,"Raiz 1\tRaiz 2\tA\tB\tC\tX1\tX2\tInc\n");  
  fprintf(fp,"%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n\n", R1, R2, A, B, C, x1, x2, inc);  


for(i=1; ; i++){

  

   x = x1 + i*inc; 
     fprintf(fp,"%f\t%f\n", x, (A*(x*x) + B*x + C));  
     if(x >= x2) break;
          
          }          
         
 

fclose(fp);
 
}

