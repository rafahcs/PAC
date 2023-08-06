/*Faça  um  programa,  utilizando  as  funções  abaixo, para  processar  as  100 peças comercializadas.
Para  cada peça, o programa deverá ler os dados e exibir o seu código, a quantidade mínima e a quantidade
máxima em estoque. Faça a seguinte função:
a)leValidaClassificacao()→para  ler,  validar  e  retornar  a  classificação  validada.  A  classificação  
é  um número inteiro de 1 a 4.
b)classe()→recebe como parâmetro a classificação da peça e guarda as quantidades mínima e máxima em estoque 
nas variáveis cujos endereços são fornecidos na chamada da função.*/

#include<stdio.h>
int leValidaClassificacao()
{int class;
do
{
  printf("Digite a classificacao(1 a 4):");
  scanf("%d",class);  
} while (class<1 && class>4);
return class;
}

void classe(int cl, int *min, int *max) {leValidaClassificacao(cl);
if(cl==1)
{*min=100;
*max=120;
}
else if(cl==2)
   {*min=150;
    *max=180;
   }
   else if(cl==3) {*min=200;
   *max=250;    
   }
   else {*min=250;
   *max=300;
   }
}

int main() {int cont,cla,min,max,cod;
  for(cont=0;cont<100;cont++) {printf("Digite o codigo:");
  scanf("%d",&cod);
  classe(cla,&min,&max);
printf("\nCodigo:%d\nMinimo:%d\nMaximo:%d",cla,min,max);
}
    return 0;
}