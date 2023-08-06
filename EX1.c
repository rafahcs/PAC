/*Faça uma função que receba como parâmetro um vetor de números inteiros e a quantidade de 
números armazenados no vetor. Esta função deverá retornar o produto dos números.*/

int produto(int v[], int qtd) 
{int prod=1;
    for(int i=0;i<qtd;i++)
    {prod*=v[i]; //prod=prod*v[i];
    }
return prod;
}
