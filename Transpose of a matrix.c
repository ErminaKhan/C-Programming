/*Write a C program to find the transpose of a given matrix. The program should prompt the user to input the number of rows and columns, as well as the elements of the matrix. It should then calculate and display the transpose of the matrix*/
#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: \n");
    scanf("%d", &rows);

    printf("Enter the number of columns: \n");
    scanf("%d", &cols);

    int Matrix[rows][cols];
    printf("Enter the elements of the matrix: \n");
    //loop through each row and column to fill the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter the element for [%d][%d]: ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    }

    //declaring a matrix with user-defined rows and columns
    int Transpose[cols][rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Transpose[j][i] = Matrix[i][j]; //swap rows with columns to get the transpose
        }
    }

    printf("The transpose of the matrix entered is:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", Transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
