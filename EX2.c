/*Faça uma função que receba como parâmetro um vetor de números inteiros e a quantidade de 
números armazenados  no  vetor.  Esta  função  deverá  calcular  a  quantidade  de  números  
pares  e  a  quantidade  de números ímpares,armazenando-as nas variáveis cujos endereços são 
fornecidos na chamada da função.*/

void par_impar(int v[],int qtd,int *par,int *imp)
{*par=0;
*imp=0;
    for(int i=0;i<qtd;i++)
    {if(v[i]%2==0)
        (*par)++;
    else
        (*imp)++;
    }
}
