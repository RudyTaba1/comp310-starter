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

}