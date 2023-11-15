#include <stdio.h>

int main() {
    int i, n, array[100], position, value;

    printf("Enter the number of elements: ");
    scanf("%i", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %i: ", i + 1);
        scanf("%i", &array[i]);
    }

    printf("Enter the location you want to delete the number: ");
    scanf("%i", &position);

    for(i=position-1;i<n-1;i++){
        array[i]=array[i+1];
    }
    
    for(i=0;i<n-1;i++){
        printf("%i\n",array[i]);
    }


}