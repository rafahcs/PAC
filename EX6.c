/*Faça uma função que receba como parâmetro um vetor de números reais, 
um número real a ser procurado no vetor e a quantidade de números armazenados no vetor. 
Esta função deverá retornar -1 caso o número não seja encontrado ou a posição onde o número 
foi encontrado.*/

void busca(float v[], float num, int qtd)
{int i;
    for(i=0;i<qtd;i++)
{if(v[i]==num)
return i;
}
return -1;
}