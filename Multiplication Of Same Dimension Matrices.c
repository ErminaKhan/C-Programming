#include <stdio.h>
int main (){
    
    int rows,cols;
    printf("Enter the number of rows: \n");
    scanf("%d",&rows);
    printf("Enter the number of rows: \n");
    scanf("%d",&cols);
    
    //input elements for matrix A
    int A[rows][cols];
    printf("Enter the elements of Matrix A:\n");
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<cols ; j++){
            printf("elements in [%d][%d] is: ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    
    //input elements for matrix B
    int B[rows][cols];
    printf("Enter the elements of Matrix B:\n");
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<cols ; j++){
            printf("elements in [%d][%d] is: ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    
    //declare result matrix to store product of Matrix A and B
    int result[rows][cols];
    //matrix multiplication logic
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int sum = 0; // Initialize sum to accumulate the product of the row and column
            for (int k = 0; k < rows; k++) {
                sum += A[i][k] * B[k][j]; // Compute the dot product of the ith row of A and jth column of B
            }
            result[i][j] = sum; // Store the computed value in the result matrix
            printf("%d ", result[i][j]);
        }
        printf("\n"); //move to the next line
    }
    
    return 0;
}
