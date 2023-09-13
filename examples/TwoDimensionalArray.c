#include<stdio.h>

int main(){

int numeros[3] [2] = 
{
{1,2},
{3,4},
{5,6}
};

int i,j;
for (i=0;i<3;i++){
    for(j=0;j<2;j++){
        printf("%i,", numeros[i][j]);
    }
    printf("\n");
}

//printf("%i",numeros[2][0]);

}
