/*Write a C program that takes two matrices of the same dimensions as input from the user, subtracts the second matrix from the first, and displays the resulting matrix.*/

#include <stdio.h>
int main ()
{
    int rows,cols;
    printf("Enter the cols u want: ");
    scanf("%d",&cols);
    printf("Enter the rows u want: ");
    scanf("%d",&rows);
    
    //declaring a matrix with user-defined rows and columns
    int mat1[rows][cols];
    printf("Enter the digits in mat1: \n");
    //loop through each row and column to fill the matrix
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<cols ; j++){
            printf("The digit in [%d][%d]: ",i,j);
            scanf("%d",&mat1[i][j]); //
        }
        printf("\n");
    }
    
    //declare the second matrix with the same rows and columns
    int mat2[rows][cols];
    printf("Enter the digits in mat2: \n");
    //loop through each row and column to fill the matrix
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<cols ; j++){
            printf("The digit in [%d][%d]: ",i,j);
            scanf("%d",&mat2[i][j]);
        }
        printf("\n");
    }
    
    //declaring result matrix to store the difference between Mat1 and Mat2
    int result[rows][cols];
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<cols ; j++){
            result [i][j]=mat1[i][j]-mat2[i][j];
        }
    }
    
    //display the result matrix
    printf("The resulting matrix is: \n");
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<cols ; j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}