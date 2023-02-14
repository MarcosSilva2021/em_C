#include <iostream>
#include <stdio.h>
#include <math.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float hpmax,hbmax,hpc=0,hbc,v=0,v1,w,g=10,cose,k;
	int a=0,b=0,x=0,i=0,l,tc=0;
	float hp[101],t[101],hb[101];
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
	printf ("Entre com valor de altura da bolinha: \n");
	scanf ("%f",&hbmax);
	printf ("Entre com valor de altura da plataforma: \n");
	scanf ("%f", &hpmax);
	printf ("Entre com valor da velocidade angular da plataforma em rad/s: \n");
	scanf ("%f",&w);
	if(hbmax<=0||hpmax<0|| hpmax>hbmax||k<0||k>1)
	{
		
			printf ("escolha não possivel rode o programa novamente");
	}
	else{
	
	hbc=hbmax;

	hp[i]=hpc;
	hb[i]=hbc;
	t[i]=tc;
		 
	while(tc!=100){
	while(b!=100){
		
	
	if(a==0){
		b++;
		hbc=(v*0.01-(g*0.0001)/2)+hbc;
		v=-g*0.01 + v;
		cose = cos(w*(tc+0.01*b));
		hpc=(hpmax/2)*(1-cose); 
	
	    if(hpc>=hbc){
	        hbc=hpc;
	        a=1;
	        v=(-1)*v*(sqrt(k));
	        if (v<=3){
		    hbc=hpc;
		    x=1;
		}
		}
			
			
	
	}else{
		b++;
		hbc=(((v*0.01))-(g*0.0001)/2)+hbc;
		v=-g*0.01 + v;
	    cose = cos(w*(tc+0.01*b));
		hpc=(hpmax/2)*(1-cose);
	
	    if(v<=0){
	    	v=0;
	    	a=0;
	    	
	    	 if(hbc>hbmax){
	    	 	hbc=hbmax;
			}
			
		
	}
    	if(x==1){
	    	hbc=hpc;
	    	
}
}
}
b=0;
i++;
tc++;
hp[i]=hpc;
hb[i]=hbc;
t[i]=tc;

}


 char url[]="graficos.xls";
//criando ponteiro
 FILE *arq;
 
 // testando condição p abrir arquivo
 arq = fopen(url, "w");
 if(arq == NULL)
   printf("Erro, nao foi possivel abrir o arquivo\n");
 else{
 	
 	// Escrevendo no arquivo
	fprintf(arq, "\n\n",l);
	fprintf(arq, "\t Tempo  \t\t\ Altura da plataforma \t\t Altura da bolinha \n",l );
	for(i=0;i<=100;i++)  {
		
		
		  fprintf(arq, "\t %.2f \t\t %.2f\t\t %f \n",t[i], hp[i], hb[i]);
		
	} 
 }
 //fechando o arquivo
 fclose(arq);
 
}
}
	else{
	
			printf ("escolha não possivel rode o programa novamente");
	}
	
	
	return 0;
}
