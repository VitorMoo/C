#include<stdio.h>

void CalculateAndPrint(int a, int b){
    int sum = a+b;
    int sub = a-b;
    int multi = a*b;
    int diva = a/b;

    printf("Sum : %i\n",sum);
    printf("Sub : %i\n",sub);
    printf("multi : %i\n",multi);
    printf("div : %i\n",diva);
}
int main(){
    int UserInput;
    int SecondUserInput;
    printf("Enter a number : ");
    scanf("%i %i",&UserInput,&SecondUserInput);
    CalculateAndPrint(UserInput,SecondUserInput);
    return 0;
}