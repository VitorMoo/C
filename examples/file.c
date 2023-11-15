#include <stdio.h>

int main(){
    char nome[40], sobrenome[40], curso[40];
    int ra; float preco;
    FILE *arquivo;

    arquivo = fopen ("teste.txt", "a");

        if (arquivo == NULL){
            printf ("\nAlgo deu errado");
            return 0;
        }


    for (int i=0 ; i < 3; i++){
        printf ("Digite o RA: ");
        scanf ("%d", &ra);
        printf ("Digite nome, sobrenome e curso: ");
        scanf ("%s%s%s[^\n]s", nome, sobrenome, curso);
        printf ("Digite o preco:");
        scanf ("%f", &preco);
        fprintf (arquivo, "%d %s %s %s %.2f\n", ra, nome, sobrenome, curso, preco);
    
    } //for


    fclose(arquivo);
}



/*
int main(){
    char nome[40], sobrenome[40], curso[40], buffer[100];
    int ra; float preco;

    FILE *arquivo;
    arquivo = fopen ("teste.txt", "r");
    if (arquivo==NULL){
        printf ("lascou");
        return 0;
    }
    while ( fscanf(arquivo,"%d%s%s%s%f",
        &ra, nome, sobrenome, curso, &preco)!=EOF )

        printf ("%d %s %s %s %.2f\n",
                ra, nome, sobrenome, curso, preco);
    
    fclose (arquivo);
} // main


*/