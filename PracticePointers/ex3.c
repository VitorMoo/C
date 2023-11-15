/*Exercício 1: Troca de valores usando ponteiros
Escreva uma função em C chamada trocarValores que recebe dois ponteiros para inteiros como parâmetros
e troca os valores das variáveis para as quais os ponteiros apontam. Ou seja, se a aponta para o valor
5 e b aponta para o valor 10, após chamar a função trocarValores(&a, &b),
a deve apontar para 10 e b deve apontar para 5.*/

#include<stdio.h>

void trocaInteiros(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


int main(){
int x=5,y=10;
trocaInteiros(&x,&y);
printf("%i %i",x,y);   

return 0;
}