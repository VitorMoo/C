//Smallest Element: Find the smallest element in an array.//
#include<stdio.h>
int main(){

int MyArray[5]={2,88,7,32,9};
int smallest = 1000;

for(int i=0; i<5;i++){
    if(MyArray[i]<smallest){
        smallest = MyArray[i];
    }
}
printf("%i",smallest);



return 0;
}