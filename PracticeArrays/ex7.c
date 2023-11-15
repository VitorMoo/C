//Smallest Element: Find the smallest element in an array.//
//include<limits.h>
#include<stdio.h>
int main(){

int MyArray[5]={2,8,7,32,9};
int smallest = 1000;//int_MAX; represents the maximum possible value for an integer.

for(int i=0; i<5;i++){
    if(MyArray[i]<smallest){
        smallest = MyArray[i];
    }
}
printf("%i",smallest);



return 0;
}