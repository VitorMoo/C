//Escreva um programa que solicite ao usuário um número inteiro positivo N e, 
//em seguida, utilize um loop for para imprimir os primeiros N múltiplos de 5.
#include<stdio.h>
int main(){

int N;
printf("Digite um numero inteiro e positivo : ");
scanf("%i",&N);

if (N<=0){
    printf("Tente novamente");
    return 1;
}

int soma=0;
int contador=1;

for( contador = 1;contador<=N;contador++){
    printf("%i\n",5*contador);
}


return 0;
}

