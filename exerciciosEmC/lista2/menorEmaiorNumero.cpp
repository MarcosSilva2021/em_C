#include<stdio.h>
#include<conio.h>
main()
{
      int maior, menor, media=0, num=1;

      printf("Digite um numero...: ");
      scanf("%d",&num);
      maior=num;
      menor=num;
      media=num;

      for(int i=0;i<=8;i++)
      {
           printf("Digite um numero...: ");
           scanf("%d",&num);
           media=media+num;

           if(num<menor)
           {
                menor=num;
           }
           if(num>maior)
           {
                maior=num;
           }
      }

      printf("O maior numero e...: %d",maior);
      printf("\nO menor número e...: %d",menor);
      printf("\nA media é...: %d",media/10);

      getche();
}
