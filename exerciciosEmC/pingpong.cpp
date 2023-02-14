
#include <iostream>
#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int hpmax,hbmax,hpc=0,hbc,a=0,b=0,v=0,v1,tc=0,i=0,w,g=10;
	float k;
	int hp[100],t[100],hb[100];
	char tb;
	printf ("defina como se a bola se comporta : \n a = elastica \n b = elastica amortecido \n c = inelastica \n");
	
	scanf("%c",&tb);
	
	if(tb == 'a' || tb == 'b' || tb=='c'){
	switch(tb){
		
		case'a':
			k=1;
			break;
		
		case'b':
				printf ("defina o amortercimento da bola:\n ");
				scanf("%f",&k);
			break;
		
		case'c':
			k=0;
			break;
	

	}
	printf ("entre com valor de altura da bolinha: \n");
	scanf ("%d",&hbmax);
	printf ("entre com valor de altura da plataforma: \n");
	scanf ("%d",&hpmax);
	printf ("entre com valor da velocidade angular da plataforma em rad/s: \n");
	scanf ("%d",&w);
	hbc=hbmax;
	
	hp[i]=hpc;
	hb[i]=hbc;
	t[i]=tc;
	
	while(tc!=100){
	
	if(a=0){
		tc++;
		i++;
		v1=v;
		hbc=(v*tc-(g*tc*tc)/2)+hbc;
		v=-g*tc + v;
		hpc=(hpmax/2)*(1-(cos(w*tc))) ;
		hp[i]=hpc;
	    hb[i]=hbc;
	    t[i]=tc;
	    if(hbc<=hpc){
	    	while ((hpc-hbc)>0,1){
	    		tc=tc-0,05;
	    		v=v1;
				hbc=(v*tc-(g*tc*tc)/2)+hbc;
		        v=-g*tc + v;
		        hpc=(hpmax/2)*(1-(cos(w*tc)));
			    b++;
			    if(b==100) break;
			}
			hp[i]=hpc;
	        hb[i]=hbc;
	        t[i]=tc;
	        tc=i;
	        a=1;
	        b=0;
			
			if(b==100) break;
		}
		if(b==100) break;
	}else{
		tc++;
		i++;
		v=v*-1;
		v1=v;
		hbc=(v*tc-(g*tc*tc)/2)+hbc;
		v=-g*tc + v;
		hpc=(hpmax/2)*(1-(cos(w*tc)));
		hp[i]=hpc;
	    hb[i]=hbc;
	    t[i]=tc;
	    if(v<=0){
	    	while ((v)>0,1){
	    		tc=tc-0,05;
	    		v=v1;
				hbc=(v*tc-(g*tc*tc)/2)+hbc;
		        v=-g*tc + v;
		        hpc=(hpmax/2)*(1-(cos(w*tc)));
			    b++;
			    if(b==100) break;
			}
			hp[i]=hpc;
	        hb[i]=hbc;
	        t[i]=tc;
	        tc=i;
	        a=0;
	        b=0;
	        v=0;
		
	}
	if(b==100) break;
}
  if(b==100){
  	printf ("o programa não consegue roda com esses dados");
  	
  }
}
}
	else{
	
			printf ("escolha não possivel rode o programa novamente");
	}
	



	
		printf ("\n %f ",hbmax); 
	
	return 0;
}

