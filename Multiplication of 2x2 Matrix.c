#include <stdio.h>

int main() {
    int rows = 2; //define number of rows
    int cols = 2; //define number of columns

    int A[2][2] = { //initialize 2x2 matrix
        {1, 2},
        {2, 1}
    }; 
    int B[2][2] = {
        {3, 2},
        {2, 3}
    };
    int result[2][2] = {0}; // Initialize result matrix to zero
    
    //loop through each rows of Matrix A
    for (int i = 0; i < rows; i++) {
        //loop through each column of Matrix B
        for (int j = 0; j < cols; j++) {
            int sum = 0; // Initialize the sum for each element of the result matrix
            // Perform the dot product of the ith row of A and the jth column of B
            for (int k = 0; k < rows; k++) {
                sum += A[i][k] * B[k][j];
            }
            result[i][j] = sum; //store the value of sum in result matrix
            printf("%d ", result[i][j]);
        }
        printf("\n"); //move to the next line after printing a row
    }

    return 0;
}

