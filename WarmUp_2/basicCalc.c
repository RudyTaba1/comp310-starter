#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Sum: %d \n", (num1 + num2));
    printf("Difference: %d \n", (num1 - num2));
    printf("Product: %d \n", (num1 * num2));
    
    if((num1/num2)>0){
    printf("Quotient: %d \n", (num1 / num2));
    }
    else{
        printf("Quotient: %f \n", ((float)num1 / (float)num2));
    }
    return 0;
    }