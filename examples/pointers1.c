#include<stdio.h>

int main(){

int a;
int *p;
p=&a;
a=5;
*p=8;

printf("%i",a);


    return 0;
}