/*Faça  uma  função  que  receba  como  parâmetro  um  vetor  de  números  reais e a  
quantidade  de  números armazenados  no  vetor. Esta  função  deverá  retornar  a  
quantidade  de  números menores  que  o  último número armazenado no vetor.
*/

int menor(float v[], int qtd)
{int i,qtmenor;
    for(i=0,qtmenor=0; i<qtd; i++)
{v[i]=i;
if(v[i]<v[qtd-1])
qtmenor+=1;
}
}
