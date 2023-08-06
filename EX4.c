/*Faça um programa para processar os 1000 funcionários de uma empresa. 
Para cada funcionário, o programa deverá ler a matrícula, o código do departamento no qual
ele trabalha (número inteiro de 10 a 20) e a idade. O programa deverá exibir a idade média 
dos funcionários de cada departamento. Faça as seguintes funções:
 inicializa: recebe como parâmetro um vetor de struct e inicializa-o apropriadamente.
 exibe: recebe como parâmetro um vetor de struct já preenchido e exiba para cada departamento 
 o seu código e a idade média dos funcionários.*/

#include<stdio.h>
#define TOT 11
#define QTD 1000

struct depto
{int cod,idmedia;
};
typedef struct depto Tdep;

void inicializa(Tdep v[])
{int i;
    for(i=0;i<TOT;i++)
v[i]=0;
}

void exibe(Tdep v[])
{int i;
    for(i=0;i<TOT;i++)
printf("Departamento %d: %d",v[i].cod,v[i].idmedia);
}

int main()
{int vqtd[TOT];
    for(cont=0;cont<QTD;cont++)
{printf("Digite a matricula, codigo do departamento(10 a 20) e a idade:");
scanf("%d%d%d",&matr,&,&idade);
exibe(vqtd);
}
    return 0;
}



