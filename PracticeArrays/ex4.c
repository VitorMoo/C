//Largest Element: Find the largest element in an array.
#include<stdio.h>
int main(){

int MyArray[5]={4,7,5,3,2};
int largest=MyArray[0];

for(int i=0;i<5;i++)
{
    if(MyArray[i]>largest){
        largest=MyArray[i];
    }
}
printf("%i",largest);

return 0;
}