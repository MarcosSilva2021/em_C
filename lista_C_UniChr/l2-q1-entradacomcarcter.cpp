#include <stdio.h>
#include <stdlib.h>

int main (){

float a,b,c;
char op;

printf("Digite os dois numeros da operação\n");
scanf("%f%f",&a,&b);

printf("\n + -> Adiçao, - -> Subtracao, / -> Multiplicaçao,  * -> Divisao \n");
printf("Dgite a o simbolo corespondente a operação solicitada !!\n");
scanf("%c\n",&op);
op = getchar();

switch (op){

case '+':

c = a + b;
printf("O resultado da Soma eh:%f\n",c);
break;

case '-':

c = a - b;
printf("O resultado eh:%f\n",c);
break;

case '*':

c = a * b;
printf("O resultado eh:%f\n",c);
break;

case '/':

c = a / b;
printf("O resultado eh:%f\n",c);
break;

default :
	
printf("Codigo invalido ?\n");
break;

}

return 0;

} 


