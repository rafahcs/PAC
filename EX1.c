/*Faca  uma  funcao  que  receba  como  parametros  uma  matriz  6  X  12  de  inteiros,  
ja  preenchida,  contendo  a quantidade mensal vendida do carro Gol nos anos de 2010 a 2015 
e um vetor contendo o preco do carro nos anos de 2010 a 2015. 
A funcao devera exibir o valor total das vendas do carro Gol em cada ano (2010 a 2015).*/


void gol(int m[][12],float v[])
{int qtd=0;
float total, soma=0;
    for(i=0;i<ANO;i++)
{for(k=0;k<COL;k++)
{qtd+=m[i][k];
total=qtd*v[i];
soma+=total;
}
}
    printf("Valor total das vendas(2010 a 2015):",soma);
}