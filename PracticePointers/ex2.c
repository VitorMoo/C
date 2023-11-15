/*Exercicio 2
Crie uma função que receba um ponteiro para um inteiro como argumento
e altere o valor do inteiro para o dobro do valor original.*/

#include<stdio.h>
void ponteiroParaInteiro(int *ponteiro){
  *ponteiro = (*ponteiro )* 2; 
}
int main(){
int ponteiro=4;
ponteiroParaInteiro(&ponteiro);
printf("%i",ponteiro);    
return 0;
}