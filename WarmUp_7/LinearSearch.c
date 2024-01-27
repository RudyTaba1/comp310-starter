#include <stdlib.h>
#include <stdio.h>
/**
 * @brief This function attempts to returns the size of an array dynamically.
 *It doesn't actually work, but I thought I'd keep it for ideas later.
*/
/*int ArraySize(int* arr){
    int size = 0;
    while(arr[size] != NULL){
        size++;
    }
}*/

int linearSearch(int* arr, int size, int target){
    //int size = ArraySize(arr);
    for(int i = 0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {1,4,7,9,12};
    int target = 9;
    int size  = 5;
    int index = linearSearch(arr,size,target);

    //printf("size of array: %d\n", ArraySize(arr));
    printf("size of array: %d\n", size);
    
    if(index != -1){
        printf("Target found at index %d\n", index);
    }
    else{
        printf("Target not found\n");
    }
}