#include<stdio.h>
#include<stdlib.h>

int** addMatrices(int** a, int** b){
    int rows = sizeof(a)/sizeof(a[0]);
    int cols = sizeof(b[0])/sizeof(b[0][0]);
    int sum[rows][cols];

for(int i = 0; i<rows; i++){
    for(int j = 0; j<cols; j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
}
return sum;
}