//Array Average: Write a program that calculates the average of elements in an array of integers.
#include<stdio.h>
int main(){

int myArray[]={23,6,5,2,55,75,43,30};
int n = sizeof(myArray) / sizeof(myArray[0]);
int sum=0;

for(int i=0;i<n;i++){
    sum += myArray[i];
}

float average = (float)sum/n;
printf("The average of elements in this array is : %.2f",average);

return 0;
}