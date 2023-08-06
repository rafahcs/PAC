/*Um banco possui as seguintes informações dos seus clientes: número da conta do cliente e
saldo do cliente. Faça um programa que leia os dados dos clientes e exiba para cada cliente 
o número da conta, o saldo do cliente e uma mensagem informando se o saldo dele está acima do 
saldo médio dos clientes do banco, abaixo do saldo médio dos clientes do banco ou se é igual 
ao saldo médio dos clientes do banco. Término da leitura: número da conta do cliente = 0. 
Considere que o banco possui, no máximo, 10573 clientes. O seu programa deverá utilizar a 
função abaixo.
a)exibe: recebe como parâmetros um vetor de struct, já preenchido, a quantidade de clientes do 
banco e o saldo médio do banco e exibe para cada cliente o número da conta, o saldo e uma 
mensagem informando se o saldo dele está acima do saldo médio dos clientes do banco, abaixo do 
saldo médio dos clientes do banco ou se é igual ao saldo médio dos clientes do banco.*/

#include<stdio.h>
#define MAX 10573

struct cliente
{int conta;
float saldo; 
};
typedef struct cliente Tcliente;

void exibe(Tcliente v[], int qtd, float sdmedio)
{for(int i=0;i<qtd;i++)
{printf("\nNumero da conta:%d",v[i].conta);
printf("\nSaldo:%.2f",v[i].saldo);
if(v[i].saldo>sdmedio)
printf("\nAcima do saldo medio");
else if(v[i].saldo<sdmedio)
printf("\nAbaixo do saldo medio");
else
printf("\nIgual ao saldo medio");
}
}

int main()
{int i,conta;
Tcliente vcliente[MAX];
float saldo,sdmedio;
printf("Digite o saldo:");
scanf("%f",&saldo);
printf("\nDigite o numero da conta ou 0 para encerrar:");
scanf("%d",&conta);
while(conta!=0 && i<=10573)
{printf("Digite o saldo:");
scanf("%f",&saldo);
exibe(vcliente,i,sdmedio);
printf("Digite o saldo:");
scanf("%f",&saldo);
printf("\nDigite o numero da conta ou 0 para encerrar:");
scanf("%d",&conta);
}
    return 0;
}