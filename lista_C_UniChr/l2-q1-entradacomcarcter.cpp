#include <stdio.h>
#include <stdlib.h>

int main (){

float a,b,c;
char op;

printf("Digite os dois numeros da opera��o\n");
scanf("%f%f",&a,&b);

printf("\n + -> Adi�ao, - -> Subtracao, / -> Multiplica�ao,  * -> Divisao \n");
printf("Dgite a o simbolo corespondente a opera��o solicitada !!\n");
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


