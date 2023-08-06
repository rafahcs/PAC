/*Faça  uma  função  que  receba  como  parâmetro  um  vetor  de  números  reais,  
a  quantidade  de  números armazenados no vetor e a média dos números. 
Esta função deverá retornar a quantidade de números acima da média dos números.*/

float calcmedia(float v[],int qtd,float md)
{int maior=0;
    for(int i=0;i<qtd;i++)
{if(v[i]>md)
maior++;
}
return maior;
}