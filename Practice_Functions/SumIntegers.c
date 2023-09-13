
//1 function that takes two integers and calculate their sum.
int add(int a, int b)
{
    int sum = a+b;
    return sum;
}
#include<stdio.h>
int main()
{
    int number1,number2;

    printf("Enter two numbers : ");
    scanf("%i %i",&number1,&number2);

    int result = add(number1, number2);
    printf("SUM : %i",result);
    










}
