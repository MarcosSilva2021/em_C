#include <stdlib.h>
#include <stdio.h>
 
int primo (int num) {
	int n,i,res=0;
 
      if (num % 2 == 0) 
		   return 1;
	  else
  		 return 0;
}

main() {
 
int n;
printf("entre com um valor");
scanf("%d",&n);
 
if(primo(n)){
printf("%d e par",n);
}else
printf("%d eh impar",n);

}

