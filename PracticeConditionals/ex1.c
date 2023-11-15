// Greater Number Check: Ask the user for two integer numbers and determine which one is the greater.
#include<stdio.h>

int main(){

int a;
int b;

printf("Enter two numbers to find out which one is greater: \n");
scanf("%i %i",&a,&b);

if ( a > b){

    printf("%i is greater",a);
}
else
printf("%i is greater",b);

return 0;

}
