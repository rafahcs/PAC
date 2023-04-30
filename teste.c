#include<stdio.h>
float soma(int n1,int n2)
{float media;
    media=(n1+n2)/2;
return media;}
int main()
{ int md,num1,num2;
printf("Digite os dois numeros:");
scanf("%d%d",&num1,&num2);
    md=soma(num1,num2);
printf("Media:%.2f",md);
return 0;
}