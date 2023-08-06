/*Faça uma função que receba como parâmetro um vetor de struct, contendo a quantidade de 
funcionários e  a  soma  dos  salários  em  cada  um  dos  departamentos  de  uma  empresa.
Para  cada  departamento,  esta função  deverá  calcular o  salário  médio e  exibir o  código 
e  o  salário  médio. Os  departamentos  possuem códigos de 1 a 30.Utilize a struct abaixo.*\

/*struct depto
{int qtd;float soma;
};
typedef struct depto Tdepto;*/

struct depto
{int qtd;float soma;
};
typedef struct depto Tdepto;

void dep(Tdepto v[])
{int i;
float salmd;
    for(i=0;i<v[i].qtd;i++)
{salmd=v[i].soma/v[i].qtd;
printf("\nDepartamento %d: %.2f",i+1,salmd);
}
}