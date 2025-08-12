#include <stdio.h>
int main(){
float n1,n2,n3,soma,media,multiplicacao;
printf("Digite o valor de n1:");
scanf("%f", &n1);
printf("Digite o valor de n2:");
scanf("%f", &n2);
printf("Digite o valor de n3:");
scanf("%f", &n3);
soma=n1+n2+n3;
printf("O valor da soma e:%.0f\n",soma);
media=soma/3;
printf("O valor da media e:%f\n",media);
multiplicacao=n1*n2*n3;
printf("O valor da multiplicacao e:%.0f\n",multiplicacao);

}