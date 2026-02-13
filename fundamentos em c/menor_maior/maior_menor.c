#include <stdio.h> 
int main(void) 
{ 
    int N=0,maior,menor; 
    while(N<=0) 
    { 
        printf("insira a quantidade de elementos do vetor: "); 
        scanf("%d",&N); if(N<=0) 
        { 
            printf("quantidade invalida!\n"); 
        } 
    } 
    int v[N],i=0; 
    printf("insira o valor de posicao %d do vetor: ",i+1); 
    scanf("%d",&v[0]); 
    maior=v[0]; 
    menor=v[0]; 
    for(i=1;i<N;i++) 
    { printf("insira o valor de posicao %d do vetor: ",i+1); 
    scanf("%d",&v[i]); 
    if(menor>v[i]) 
    { 
        menor=v[i]; 
        
    } 
    if(maior<v[i]) 
    { 
        maior=v[i]; 
    } 
    }
    printf("menor: %d",menor);
    printf("\nmaior: %d",maior);
    return 0; 
    }
