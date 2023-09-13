#include<stdio.h>
#include<string.h>

struct Estudante{

char nome[50];
char curso[50];
int idade;
float media;
};

int main(){

    struct Estudante estudante1;

    strcpy(estudante1.nome,"Vitor");
    strcpy(estudante1.curso,"Engenharia de Software");
    estudante1.idade=20;
    estudante1.media=10;
    
    printf("%i\n",estudante1.idade);
    printf("%2.f\n",estudante1.media);
    printf("%s\n",estudante1.nome);
    printf("%s\n",estudante1.curso);
}