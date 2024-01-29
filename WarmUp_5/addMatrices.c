#include<stdio.h>
#include<stdlib.h>

/**
 * This warmup definitely through me for a loop with the pointers and the malloc.
 * Though I get the correct output, I'm bother by not being able to dyanmically get
 * the size of the 2d array. Is there a way to get those variables dynamically?
*/

int** addMatrices(int rows, int cols, int a[rows][cols], int b[rows][cols]){
    //Doing research, couldn't figure out whether it is necessary to have malloc (memory allocation) to do this
    //I think it is necessary, so I'm keeping it
    int** sum = (int**)malloc(rows*sizeof(int*));

if(rows==cols){
for(int i = 0; i<rows; i++){
    sum[i] = (int*)malloc(cols*sizeof(int));
        
        for(int j = 0; j<cols; j++){
        
        sum[i][j]=a[i][j]+b[i][j];
        
        }
    }
}

return sum;

}


int** multiplyMatrcies(int rows, int cols, int a[rows][cols], int b[rows][cols]){
//storage method for product the same as sum    
int** product = (int**)malloc(rows*sizeof(int*));

if(rows==cols){
    for(int i = 0; i<rows; i++){
        product[i] = (int*)malloc(cols*sizeof(int));
        for(int j = 0; j<cols; j++){
            product[i][j]=a[i][j]*b[i][j];
        }
    }    
}
return product;
}

void printMatrix(int rows, int cols, int** a){
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}

int main(){
    int matrix1[2][2] = {{1,2},{3,4}};
    int matrix2[2][2] = {{5,6},{7,8}};

    int rows = 2;
    int cols = 2;


    int** sum = addMatrices(rows, cols, matrix1, matrix2);

    int** product = multiplyMatrcies(rows, cols, matrix1, matrix2);

    printf("Matrix Addition:\n");
    printMatrix(rows, cols, sum);
    

    printf("Matrix Multiplication:\n");
    printMatrix(rows, cols, product);
       return 0;

}




