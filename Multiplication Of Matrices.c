#include <stdio.h>

int main()
{
    int rows1,cols1,rows2,cols2;
    //input dimensions of Matrix A
    printf("Enter the number of rows of Matrix A: \n");
    scanf("%d",&rows1);
    printf("Enter the number of columns of Matrix A: \n");
    scanf("%d",&cols1);
    
    // Initialize and input elements for Matrix A
    int A[rows1][cols1];
    printf("Enter the elements in Matrix A:\n");
    for (int i=0 ; i<rows1 ; i++){
        for (int j=0 ; j<cols1 ; j++){
            printf("The digit in [%d][%d] is: ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    
    // Input dimensions for Matrix B
    printf("Enter the number of rows of Matrix B: ");
    scanf("%d",&rows2);
    printf("Enter the number of columnsof Matrix B: ");
    scanf("%d",&cols2);
    
    // Initialize and input elements for Matrix B
    int B[rows2][cols2];
    printf("Enter the elements in Matrix B:\n");
    for (int i=0 ; i<rows2 ; i++){
        for (int j=0 ; j<cols2 ; j++){
            printf("The digit in [%d][%d] is: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    
    // Check if multiplication is feasible
    if (cols1==rows2){
        int result[rows1][cols2]; // Initialize result matrix
        printf("The product of the two matrices is:\n");
        // Perform matrix multiplication
        for (int i=0 ; i<rows1 ; i++){
            for (int j=0 ; j<cols2 ; j++){
                int sum=0; // Initialize sum to 0 for each element in result matrix
                for (int k=0 ; k<rows1 ; k++){
                    sum=sum+A[i][k]*B[k][j];
                }
                result[i][j]=sum; // Store the result in the result matrix
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }
    else{
        // Error message when multiplication is not feasible
        printf("Matrix multiplication is not feasible because the number of columns in Matrix 1 does not match the number of rows in Matrix 2. This alignment is a fundamental requirement for performing matrix multiplication.");
    }
    

    return 0;
}
