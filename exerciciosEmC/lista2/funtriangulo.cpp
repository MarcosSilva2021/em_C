#include<stdio.h>

int triangulo(int a,int b, int c){



if (a == b && b == c && c == a) {
//printf(" tri�ngulo Equilatero\n");
return 1;
}
else if (a == b || b == c || c == a) {
printf(" tri�ngulo Is�sceles\n");
return 2;
}
else if (a != b && b != c && c != a){
//printf(" tri�ngulo Escaleno\n");
return 3;
}
else
//printf ("Valores invalidos para formar um triangulo\n");
return 0;
} 
int main(){
	int a,b,c;

printf ("informe tamanho do lado (A)do Tri�ngulo: ");
scanf("%d",&a);
printf ("informe tamanho do lado (B)do Tri�ngulo: ");
scanf("%d",&b);
printf ("informe tamanho do lado (C)do Tri�ngulo: ");
scanf("%d",&c);

printf("o triangulo e %d", triangulo(a, b, c));
	
	
}
