#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char hello[] = "Hello";
    
    printf("Original: %s \n", hello);
    //found this using google
    //int size = sizeof(hello) / sizeof(hello[0]); didn't work for the loop for whatever reason
    int size = strlen(hello);
    
    for(int i = 0, j = size - 1; i < j; i++, j--){
        char temp = hello[i];
        hello[i] = hello[j];
        hello[j] = temp;
    }
    printf("Reversed: %s \n", hello);
    return 0;
}