/*Faça um programa para processar os 500 funcionários de uma empresa. Para cada funcionário, 
o programa deverá ler  o  código  do  departamento  no  qual  ele  trabalha (número  inteiro 
de  1  a  10)  e  o  salário.  O  programa  deverá exibir o menor salário de cada departamento. 
Faça as seguintes funções:
a)inicializa: recebe como parâmetro um vetor de números reais e inicializa-o apropriadamente.
b)exibe:  recebe  como  parâmetro  um  vetor  de números  reais já  preenchido  e  exibe  o 
menor salário de  cada departamento.*/

#include<stdio.h>
#define MAX 50
#define DEP 10
void inicializa(float v[])
{int i;
for(i=0;i<DEP;i++)
v[i]=0;
}

void exibe(float v[])
{int i;
float sal,menor=-1;
for(i=0;i<DEP;i++)
printf("\nDepartamento %d:%.2f",i+1,v[1]);
}

int main()
{int cod,i;
float vet[MAX],sal;
inicializa(vet);
    for(i=0;i<MAX;i++)
{printf("\nDigite o codigo e o salario:");
scanf("%d%f",&cod,&sal);
if(vet[cod-1]==0)
vet[cod-1]=sal;
else
vet[cod-1]=sal;
}
exibe(vet);
return 0;
}