/*write a program to print the following numbers in reverse order
34 56 54 32 67 89 90 32 21 assume that all numbers are stored in a array*/

#include<stdio.h>

int main(){
    int x[9]={34,56,54,32,67,89,90,32,21};
    
    for(int i=0;i<9;i++)
        {
            printf("%i\t",x[i]);
        }
        printf("\n");
    for(int i=8;i>=0;i--){ 
        printf("%i\t",x[i]);
    }
return 0;    
}

