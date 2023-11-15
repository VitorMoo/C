/*Exercício 1:
Escreva um programa que declare uma variável inteira e um ponteiro para essa variável.
Atribua um valor à variável e exiba esse valor usando o ponteiro.*/
#include<stdio.h>
int main(){
    
int a,*b;
a=5;
b=&a;
printf("%i %i",a,*b);  
return 0;
}