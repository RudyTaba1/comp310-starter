#include<stdio.h>
#include<stdlib.h>

int** addMatrices(int** a, int** b){
    int rows = sizeof(a)/sizeof(a[0]);
    int cols = sizeof(b[0])/sizeof(b[0][0]);
    //Doing research, couldn't figure out whether it is necessary to have malloc (memory allocation) to do this
    //I think it is necessary, so I'm keeping it
    int** sum = (int**)malloc(rows*sizeof(int*));

for(int i = 0; i<rows; i++){
    sum[i] = (int*)malloc(cols*sizeof(int));
    for(int j = 0; j<cols; j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
}
return sum;
}

int** multiplyMatrcies(int** a, int** b){
    
//storage method for product the same as sum    
    int rows = sizeof(a)/sizeof(a[0]);
    int cols = sizeof(b[0])/sizeof(b[0][0]);
    int** product = (int**)malloc(rows*sizeof(int*));

while(a[rows][cols] == b[rows][cols]){
    for(int i = 0; i<rows; i++){
        product[i] = (int*)malloc(cols*sizeof(int));
        for(int j = 0; j<cols; j++){
            product[i][j]=a[i][j]*b[i][j];
        }
    }    
}
return product;
}

int printMatrix(int**a){
    int rows = sizeof(a)/sizeof(a[0]);
    int cols = sizeof(a[0])/sizeof(a[0][0]);
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main(){
    int matrix1[2][2] = {{1,2},{3,4}};
    int matrix2[2][2] = {{5,6},{7,8}};

    
    int** sum = addMatrices(matrix1,matrix2);

    int** product = multiplyMatrcies(matrix1,matrix2);

    printf("Matrix Addition: %d\n", printMatrix(sum));

    printf("Matrix Multiplication: %d \n", printMatrix(product));

    return 0;

}




