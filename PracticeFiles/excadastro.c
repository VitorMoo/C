/*Escreva um programa que permita o cadastro de alunos e suas notas.

Os dados cadastrados devem ser salvos em arquivo, portanto, não se perdem quando o programa finaliza.

Segue a estrutura do arquivo:

RA        NOME    PARCIAL     EXAME     MEDIA
123456    Joao    5.0         5.0       5.0

O menu de opções deve conter:
1) Cadastrar novo alunos
2) Exibir alunos cadastrados.
3) Sair*/


#include<stdio.h>

typedef struct{
    int ra;
    char nome[30];
    float parcial;
    float exame;
    float media;
}estudante;

estudante alunos;

void cadastroEstudante(){
     FILE *arquivo;

    arquivo = fopen ("teste.txt", "a");

        if (arquivo == NULL){
            printf ("\n Algo deu errado ");
            return;
        }
        printf("Digite nome|RA|parcial|exame:\n");
        scanf ("%s%i%f%f",alunos.nome,&alunos.ra,&alunos.parcial, &alunos.exame);

        alunos.media=(alunos.parcial+alunos.exame)/2.0;

    fprintf(arquivo, "\t%-10s\t%-5s\t%-8s\t%-8s\t%-8s\n", "NOME", "RA", "PARCIAL", "EXAME", "MEDIA");
    fprintf(arquivo, "\t%-10s\t%-5i\t%-8.2f\t%-8.2f\t%-8.2f\n", alunos.nome, alunos.ra, alunos.parcial, alunos.exame, alunos.media);
    fclose(arquivo);

}

void exibirEstudantes(){

}

int main(){
    int menu;
    do {
        printf("\n1- Cadastrar\n2- Exibir\n3- Sair\n");
        scanf("%i", &menu);

        switch (menu) {
            case 1:
                cadastroEstudante();
                break;

            case 2:
                exibirEstudantes();
                break;

            case 3:
                menu=3;
                break;

            default:
                printf("Opção invalida\n");
        }
    } while (menu != 3);

return 0;
}