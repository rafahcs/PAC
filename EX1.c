/*Faça um programa que leia as notas (número inteiro de 0 a 10) dos alunos de uma turma e
exiba a quantidade de alunos em cada nota, conforme exemplo abaixo. Término da leitura: 
nota = -1. Faça as seguintes funções:
a)inicializa: recebe como parâmetro um vetor de números inteiros e inicializa-o apropriadamente.
b)exibe:recebe como parâmetro um vetor de números inteiros já preenchido e exibe a 
quantidade de alunos em cada nota conforme exemplo abaixo.
Nota 0: 2
Nota 1: 4
...Nota 10: 8*/

#include<stdio.h>
#define TOT 11

void inicializa(int v[])
{int i;
for(i=0;i<TOT;i++)
v[i]=0;   
}

void exibe(int v[])
{int i,novo;
for(i=0;i<TOT;i++)
    {novo=v[i]+1;
        printf("\nNota %d: %d",i,novo);
    }
}

int main ()
{int vqtd[TOT],nota;
printf("Digite a nota do aluno ou -1 para encerrar:");
scanf("%d",&nota);
inicializa(vqtd);
while(nota != -1)
{exibe(vqtd);
printf("\nDigite a nota do aluno ou -1 para encerrar:");
scanf("%d",&nota);
}
    return 0;
}