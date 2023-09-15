//Array Sum: Write a program that calculates the sum of all elements in an array.

#include<stdio.h>
int main(){
int sum=0;
int SumArray[4]={2,2,2,2};

for(int i=0; i<=3;i++){
    sum +=SumArray[i];
    printf("%i\n",sum);
}


return 0;
}