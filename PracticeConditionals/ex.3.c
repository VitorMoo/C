//Even or Odd Check:
// Create a program that asks the user for an integer and informs whether the number is even or odd.
#include<stdio.h>
int main(){

int a;

printf("Enter one number to verify if its even : ");
scanf("%i",&a);

if(a % 2 == 0){
    printf("The number is Even : %i ",a);
}
else{
    printf("The number is odd : %i",a);
}


    return 0;
}
