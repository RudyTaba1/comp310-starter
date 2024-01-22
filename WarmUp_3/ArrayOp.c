#include <stdio.h>
#include <stdlib.h>
int ArraySize(int array[]){
    return sizeof(array) / sizeof(array[0]);
}

int main(){
    int sum = 0;
    int numbers[] = {1, 2, 3, 4, 5};
    
    for(int i = 0; i < 5; i++){
        sum += numbers[i];
    }

    double average = sum / (double) ArraySize(numbers);

    printf("Sum: %d \n", sum);
    printf("Average: %f \n", average); 
    return 0;
    }