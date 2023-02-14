#include <stdlib.h>
#include <stdio.h>
 
int primo (int num) {
	int n,i,res=0;
 
for(int i=2; i<num; i++) {
 
       if (num % i == 0) {
       res++;
       break;
    }
 }
 
 if (res == 0)
   return 1;
 else
   return 0;
 
}
 
main() {
 
int n;
printf("entre com um valor");
scanf("%d",&n);
 
if(primo(n)){
printf("%d e primo",n);
}else
printf("%d não eh primo",n);

}

