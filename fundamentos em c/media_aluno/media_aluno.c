#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int provas=0;
    float somamedia=0,nota,mediafinal;
    printf("insira o numero de provas realizadas pelo aluno: ");
    scanf("%d",&provas);
    if(provas<=0)
    {
        printf("numero de provas invalido\n");
        return 0;
    }
    for(int i=0;i<provas;i++)
    {
        printf("insira a nota da prova numero %d: ",i+1);
        scanf("%f",&nota);
        somamedia+=nota;
    }
    mediafinal = somamedia/provas;
    if(mediafinal>=7.0)
    {
        printf("aluno aprovado");
        return 0;
    }
    printf("aluno reprovado");
  