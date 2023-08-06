/*Um posto de gasolina deseja fazer uma análise das vendas dos combustíveis comercializados 
nos 31 dias do mês de agosto de 2021. O posto comercializa 4 tipos diferentes de combustível. 
Escreva uma função que recebe como parâmetros  duas  matrizes  já  preenchidas.  A  primeira
matriz  contém  as  quantidades  vendidas  de  cada  tipo  de combustível  em  cada  dias  
do  mês  de  agosto  e  a  segunda  matriz  contém  os  preços  de  venda  de  cada  tipo  
decombustível em cada dia do mês de agosto. Esta função deverá exibir:
a)Para cada tipo de combustível: o valor total das vendas no mês de agosto;
b)Para cada dia do mês: o valor total das vendas de todos os tipos de combustível.*/


void posto(int m1[][31], float m2[][31])
{int i,k;
float smtipo,somatipo,smdia,somadia;
for(i=0;i<4;i++)
{for(k=0;k<31;k++)
{smtipo=m1[i][k]*m2[i][k];
somatipo+=smtipo;
}
}

for(k=0;k<31;k++)
{for(i=0;i<4;i++)
{smdia=m1[k][i]*m2[k][i];
somadia+=smdia;
}
}

}



