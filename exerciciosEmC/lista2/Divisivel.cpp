#include <stdlib.h>
#include <stdio.h>
 
int primo (int num, int num2) {
	int n,i,res=0;
 
      if (num % num2 == 0) 
		   return 1;
	  else
  		 return 0;
}

main() {
 
int n,x;
printf("entre com um a Dididir: ");
scanf("%d",&n);
printf("entre com um Divisor: ");
scanf("%d",&x);
 
if(primo(n,x)){
printf("%d e Divisivel por %d",n,x);
}else
printf("%d nao e divisivel por %d",n,x);

}
