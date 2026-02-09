#include <stdio.h>
int main(void)
{
   int N,pares=0,impares=0,numero;
   printf("Insira a quantidade de numeros a serem analisados: ");
   scanf("%d",&N);
   if(N<=0)
   {    
       printf("Quantidade invalida!");
       return 0;
   }
   for(int i=0;i<N;i++)
   {
      printf("Insira o %d numero: ",i+1);
      scanf("%d",&numero);
      
      if (numero <= 0)
        {
            printf("Numero ignorado (deve ser maior que zero).\n");
        }
        else if (numero % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
      
   }
   printf("\nTotal de pares: %d\n",pares);
   printf("Total de impares: %d\n",impares);
   return 0;
}