#include<stdio.h>
#include<stdlib.h>
#define N 3
#define M 3

void buscaHidrometro(int valor,int *rua,int *casa,int Matriz[M][N]){
    printf("Digite o valor a ser procurado:");
    scanf("%i",&valor);

    *rua=-1;
    *casa=-1;

    for(int i =0;i<M;i++){
        for(int j =0;j<N;j++){
            if(Matriz[i][j]==valor){
                *casa=i;
                *rua=j;
            }
} 
}
printf("valor : %i encontrado em %i %i",valor,*casa,*rua);
}
int main(){
int valor,rua,casa,matriz[M][N]={   1,2,3,
                                    4,5,6,
                                    7,8,9};
buscaHidrometro(valor,&rua,&casa,matriz);   
return 0;
}