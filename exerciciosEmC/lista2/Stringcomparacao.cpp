#include <stdio.h>
#include <string.h>


int main() {
  char str1[30],str2[30];
  int i;

  printf("Digite uma frase:");
  fflush(stdout);
  fgets(str1,30,stdin);

  printf("Digite uma frase:");
  fflush(stdout);
  fgets(str2,30,stdin);

if(strcmp(str1, str2) == 0)
   printf("As frases s�o iguais\n");
 else
   printf("As frases n�o s�o iguais\n");

 return 0;
} 
